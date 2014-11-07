/*
 * Graph.cpp
 *
 *  Created on: Nov 7, 2014
 *      Author: s9evpaul
 */

#include "Graph.h"



#include <iostream>
#include<cstdlib>
#include <list>

using namespace std;
template <class Category, class T, class Distance = ptrdiff_t,
          class Pointer = T*, class Reference = T&>

Graph::Graph() {
private:
	std::list<Node> nodelist;
	Node thisnode;
	
public:

	Node get_Node {return (thisnode);}
	
	  struct iterator {
	    typedef T         value_type;
	    typedef Distance  difference_type;
	    typedef Pointer   pointer;
	    typedef Reference reference;
	    typedef Category  iterator_category;
	  };

}


Graph::Graph(const Graph& g) {
	// TODO Auto-generated constructor stub

}

Graph::~Graph() {
	// TODO Auto-generated destructor stub
}


bool Graph::hasNode(const Sequence& seq)const{
	Node nodeseq= seq.get_Node();
	return nodeseq != 0;
}


//get node
Node& Graph::getNode(const Sequence& seq){
	if (seq.hasNode==true){ //wenn sequence einen node hat, gib diesen node zurück
		return seq.get_Node();
	}else{
		Node *newnode = new Node; //wenn sequence keinen node hat, erstelle einen neuen node
		 nodelist.push_back (newnode); //füge den node in die liste hinzu
		return newnode; // gib den neuen node zurück
	}
}

//löscht node aus nodelist,liste von eingehenden kanten und ausgehenden kanten
void Graph::removeNode(Node& node){
	nodelist.remove(node);
//	Node::get_InEdge.remove(node);
//	Node::get_OutEdge.remove(node);
}


