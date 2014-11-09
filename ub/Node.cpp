#include "Node.h"
#include "Sequence.h"
#include "Edge.h"
#include <string.h>
#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>

/*
 * Default - Konstruktor
 */
Node::Node(){
}

/*
 * Copy - Konstruktor
 */
Node::Node(const Node& node):sequence_(node.sequence_),inedges(node.getInEdges()),outedges(node.getOutEdges()){
}

/*
 * Detailed Konstruktor
 */
Node::Node(const Sequence& sequence){
     sequence_=sequence;
}

/*
 * Destruktor
 */
Node::~Node(){
}

/*
 * Zuweisungsoperatorator "="
 */
Node& Node::operator=(const Node& node){
    sequence_= node.sequence_;
    inedges=node.getInEdges();
    outedges=node.getOutEdges();
    return *this;
}

/*
 * Operator "=="
 */
bool Node::operator==(<#const Node &node#>) const {
    return ((sequence_==node.sequence_)&&(inedges=node.inedges)&&(outedges==node.outedges));
}
/*//operator "="
 Sequence& Sequence::operator=(const Sequence& seq){
     sequence_ = seq.sequence_;
     return *this;
 }

 //Copy Constructor
 Sequence::Sequence(const Sequence& seq){
 sequence_ = seq.sequence_;
 }
 
//Detailed Constructor
 Sequence::Sequence(const std::string& seq){
 sequence_ = seq;
 }
*/







/*get_InEdge{return (inedge);}
Node get_OutEdge {return (outedge);}

Node::Node(string* newseq){
		newseq = new string[strlen(newseq)+1];
		
	}

	Node::Node(const Node& n){

	}


	Node::~Node() {
		// TODO Auto-generated destructor stub
	}

*/
	
	




