/** @file  p1-start.cpp
 *
 * @author Collin Quigley
 * @cwid   50218780
 * @assg   Programming Assignment #1
 * @date   February 4, 2019
 * @ide    Visual Studio 2017
 *
 * @descrption Example of using the C++ Standard Template Library
 *    (STL) classes to implement solution for assignment 01.
 *    In this assignment, we maintain a stack and a queue,
 *    and demonstrate instantiationg STL data stuctures that
 *    can be used as stacks and queues to simulate items
 *    being added and removed from each data structure as
 *    requested by the simulation.
 */
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;


/** The stack/queue simulator
 * The main loop for running tests of the queue data type.
 * The file contains commands to enqueue and deque items
 * from the queue.
 *
 * @param simfilename The name of the file (e.g. simfile-01.sim) to
 *     open and read commands to test the queue and stack data type
 *     on.
 */
void runSimulation(char* simfilename)
{
	ifstream simfile(simfilename);
	string command;
	int queueItem;
	string stackItem;

	list<int> queue; 
	list<string> stack;

	// open the input simulation file to read and process simulation
	// comands
	cout << "Processing stack/queue simulation file: "
		<< simfilename << endl;
	if (!simfile.is_open())
	{
		cout << "Error: could not open simulation file: "
			<< simfilename << endl;
		exit(1);
	}

	// read and process stack/queue simulation comands line by line
	while (!simfile.eof())
	{
		simfile >> command;

		if (command == "enqueue")
		{
			simfile >> queueItem;
			cout << "Enque  : " << queueItem << endl;
			queue.push_back(queueItem);
		}
		else if (command == "dequeue")
		{

			if (queue.size() != 0 )
			{
				queueItem = queue.front();
				queue.pop_front();
				cout << "Dequeue: " << queueItem << endl;
			}
			else
			{
				cout << "Request from empty queue" << endl;
			}

		}
		else if (command == "push")
		{
			simfile >> stackItem;
			cout << "Push   : " << stackItem << endl;
			stack.push_front(stackItem);
		}
		else if (command == "pop")
		{
			
			if (stack.size() != 0 )
			{
				stackItem = stack.front();
				stack.pop_front();
				cout << "Popped : " << stackItem << endl;
			}
			else
			{
				cout << "Request from empty stack" << endl;
			}
		}
		else if (command == "exit") // normal termination of simulation
		{
			cout << "Simulation ends" << endl;
			exit(0);
		}
		else
		{
			cout << "ERROR: unknown command: " << command << endl;
			exit(1);
		}
		
		cout << "Stack  : ";
		if (stack.size() != 0)
		{
			for (auto it = stack.cbegin(); it != stack.cend(); ++it)
			{
				cout << *it << ' ';
			}
		}
		
		cout << endl << "Queue  : ";
	if(queue.size() != 0)
	{
		for (auto it = queue.cbegin(); it != queue.cend(); ++it)
		{
			cout << *it << ' ';
		}
	}

		// you should display the contents of your stack and queue
		// here, after processing the simulation command
		cout << endl << endl;
	}
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
 *
 * @returns int Returns 0 to OS to indicate successful completion, or non zero
 *              value to indicate an error.
 */
int main(int argc, char** argv)
{
	// validate command line arguments
	if (argc != 2)
	{
		cout << "Error: expecting simulation file as first command line parameter" << endl;
		cout << "Usage: " << argv[0] << " simfile.sim" << endl;
		exit(1);
	}

	// Invoke the function to actually run the simulation
	runSimulation(argv[1]);
	//runSimulation((char*)"simfile-02.sim");

	// return status 0 to indicate successful program completion
	return 0;
}
