/*
 * Node.cpp
 *
 *  Created on: Nov 7, 2014
 *      Author: s9evpaul
 */

#include "Node.h"
#include "Sequence.h"

class Node{
private:
	 string* newseq;
	 std::list<Edge> inedge; 
	 std::list<Edge> outedge; 
	 Edge edgearray[inedge][outedge];
	 
	
public:
	 Node get_InEdge{return (inedge);}
	 Node get_OutEdge {return (outedge);}
	 
	 Node::Node(string* newseq){
		newseq = new string[strlen(newseq)+1];
		
	}

	Node::Node(const Node& n){

	}


	Node::~Node() {
		// TODO Auto-generated destructor stub
	}

	
	
	
};



