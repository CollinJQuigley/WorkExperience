/**
 * @author Collin Quigley
 * @cwid   50218780
 * @class  CSCI 430, Spring 2019
 * @ide    Visual Studio Express 2017
 * @date   February 21, 2019
 * @assg   Programming Assignment #2
 *
 * @description Implement a simulation of a basic 3 process state system
 *    Ready, Running, Blocked.  Simulation includes a round-robin scheduler
 *    with time slice scheduling.  Need to implement a basic Process
 *    Control Block (PCB) in order to implement the round robin scheduler.
 *    Program will also have ready queues, and possible queues or other
 *    structures to keep track of blocked processes and the events they
 *    are waiting on.
 *
 */
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int currentSystemTime = 1;
int nextProcessID = 0;

enum processState
{
  NEW,
  READY,
  RUNNING,
  BLOCKED,
  DONE
};

struct controlBlock
{
  int pid;
  int start;
  int timeSlice;
  int event;
  processState state;
};

controlBlock processTable[100];

/** The process simulator.
 * The main loop for running a simulation.  We read simulation
 * events from a file
 *
 * @param simfilename The name of the file (e.g. simulaiton-01.sim) to open
 *     and read simulated event sequence from.
 * @param timeSliceQuantum The value to be used for system time slicing preemption
 *     for this simulation.
 */
void runSimulation(const char* simfilename, int timeSliceQuantum)
{
  ifstream simeventsfile(simfilename);
  string command;
  int eventnum;
	int counter = 0;
	int nextReadyProcess[100] = { 0 };
	int readyCounter = 0;
	int nextBlockedProcess[100] = { 0 };
	int blockedCounter = 0;
	int i, j;

  if (!simeventsfile.is_open())
  {
		std::cout << "Error: could not open simulator events file: " << simfilename << endl;
    exit(1);
  }

  while (!simeventsfile.eof())
  {
    simeventsfile >> command;

    // Handle the next simulated event we just read from the
    // simulation event file
    if (command == "cpu")
    {
			std::cout << "   cpu: simulate a cpu cycle here" << endl;

			for (i = 0; i < nextProcessID ; i++)
			{
				if (processTable[i].timeSlice == 5)
				{
					processTable[i].state = READY;
				}

				if (processTable[i].state != RUNNING)
				{
					counter++;
				}
			}

			if (counter == nextProcessID)
			{
				processTable[nextReadyProcess[0]].state = RUNNING;
				if ( readyCounter >= 1 )
				{
					for (i = 0, j = 1; j < readyCounter; i++, j++)
					{
						nextReadyProcess[i] = nextReadyProcess[j];
					}
				}

				readyCounter--;

			}

      for (i = 0; processTable[i].pid != nextProcessID; i++)
      {
        if (processTable[i].state == RUNNING)
        {
          processTable[i].timeSlice++;
        }
      }
    }
    else if (command == "new")
    {
			std::cout << "   new: simulate creation of new process here" << endl;
      controlBlock newProcess;
      newProcess.pid = nextProcessID;
      nextProcessID++;
      newProcess.state = NEW;

      processTable[newProcess.pid] = newProcess;
    }
    else if (command == "done")
    {
			std::cout << "   done: simulate termination of currently running process here" << endl;
			for (i = 0; processTable[i].state != RUNNING; i++)
			{
				processTable[i].state = DONE;
			}
    }
    else if (command == "wait")
    {
      simeventsfile >> eventnum;
			std::cout << "   wait: eventnum: " << eventnum <<
        " simulate event blocked and waiting" << endl;

			for (i = 0; processTable[i].state == RUNNING; i++)
			{
				processTable[i].state = BLOCKED;

				nextBlockedProcess[blockedCounter] = i;
				blockedCounter++;
			}
    }
    else if (command == "event")
    {
      simeventsfile >> eventnum;
			std::cout << "   event: eventnum: " << eventnum <<
        " simulate event occurring possibly making some processes ready" << endl;

			processTable[nextBlockedProcess[0]].state = READY;
		  nextReadyProcess[readyCounter] = nextBlockedProcess[0];
			readyCounter++;

			if (blockedCounter >= 1)
			{
				for (i = 0, j = 1; j < blockedCounter; i++, j++)
				{
					nextBlockedProcess[i] = nextBlockedProcess[j];
				}
			}

			blockedCounter--;
    }
    else if (command == "exit")
    {
      // we use an explicit indicator to ensure simulation exits correctly
      break;
    }
    else
    {
			std::cout << "    ERROR: unknown command: " << command << endl;
      exit(0);
    }

		std::cout << "Time: " << currentSystemTime << endl;
		std::cout << "CPU (currently running)" << endl;
    for (int i = 0; processTable[i].pid != nextProcessID; i++)
    {
      if (processTable[i].state == RUNNING)
      {
				std::cout << "pid=" << processTable[i].pid << ", state=" << processTable[i].state << ", start=" << processTable[i].start << ", slice=" << processTable[i].timeSlice << ',' << endl;
      }
    }

		std::cout << "Ready Queue: " << endl;

    for (i = 0; processTable[i].pid != nextProcessID; i++)
    {
      if (processTable[i].state = READY)
      {
				std::cout << "pid=" << processTable[i].pid << ", state=" << processTable[i].state << ", start=" << processTable[i].start << ", slice=" << processTable[i].timeSlice << ',' << endl;
      }
    }

		std::cout << "Blocked Queue: " << endl;

    for (i = 0; processTable[i].pid != nextProcessID; i++)
    {
      if (processTable[i].state = BLOCKED)
      {
				std::cout << "pid=" << processTable[i].pid << ", state=" << processTable[i].state << ", start=" << processTable[i].start << ", slice=" << processTable[i].timeSlice << ',' << endl;
      }
    }


  }

  simeventsfile.close();
}

/** Main entry point of simulator
 *  The main entry point of the process simulator.  We simply set up
 *  and initialize the environment, then call the appropriate function
 *  to begin the simulation.  We expect a single command line argument
 *  which is the name of the simulation event file to process.
 *
 * @param argc The argument count
 * @param argv The command line argument values. We expect argv[1] to be the
 *              name of a file in the current directory holding process events
 *              to simulate.
 */
int main(int argc, char** argv)
{
  int timeSliceQuantum = 0;

  // validate command line arguments
  /*if (argc != 3)
  {
		std::cout << "Error: expecting event file as first command line parameter and time slice quantum as second" << endl;
		std::cout << "Usage: " << argv[0] << " simeventfile.sim time_slice" << endl;
    exit(1);
  }

  // Assume second command line argument is the time slice quantum and parse it
  timeSliceQuantum = atoi(argv[2]);
  if (timeSliceQuantum <= 0)
  {
		std::cout << "Error: invalid time slice quantum received: " << timeSliceQuantum << endl;
    exit(1);
  }
	*/
  // Invoke the function to actually run the simulation
  //runSimulation(argv[1], timeSliceQuantum);

  // if don't want to use command line do following.
  // need to recompile by hand since file 
  // name to get simulated events from is hard coded
  runSimulation("simulation-01.sim", 5);

  return 0;
}