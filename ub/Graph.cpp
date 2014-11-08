/*
 * Graph.cpp
 *
 *  Created on: Nov 7, 2014
 *      Author: s9evpaul
 */

#include "Graph.h"
#include <conio.h>
#include <fstream.h>


#include <iostream>
#include<cstdlib>
#include <list>
#include <algorithm>
#include <vector>



using namespace std;
template <class Category, class T, class Distance = ptrdiff_t,
          class Pointer = T*, class Reference = T&>

public:

	std::list<Node> nodelist;
	std::vector<Edge> edgelist;
	Node thisnode;
	Edge thisedge;
	

	Node getterNode {return (thisnode);}
	Node getterEdge {return (thisedge);}
	


Graph::Graph() {

}


Graph::Graph(const Graph& g) {
	// TODO Auto-generated constructor stub

}

Graph::~Graph() {
	// TODO Auto-generated destructor stub
}


bool Graph::hasNode(const Sequence& seq)const{
	Node nodeseq= seq.getterNode();
	return nodeseq != 0;
}


//get node
Node& Graph::getNode(const Sequence& seq){
	if (seq.hasNode()==true){ //wenn sequence einen node hat, gib diesen node zurück
		return seq.getterNode();
	}else{
		Node *newnode = new Node; //wenn sequence keinen node hat, erstelle einen neuen node
		 nodelist.push_back(newnode); //füge den node in die liste hinzu
		return newnode; // gib den neuen node zurück
	}
}

//löscht node aus nodelist,liste von eingehenden kanten und ausgehenden kanten
void Graph::removeNode(Node& node){
	nodelist.remove(node);
//	Node::get_InEdge.remove(node);
//	Node::get_OutEdge.remove(node);
}

Edge getEdge(Node& src, Node& target){
	if (std::list<Edge>::iterator findEdge = std::find(edgelist.begin(), edgelist.end(), (src, target))!=0){
		return findEdge;
	}
	if (std::list<Edge>::iterator findEdge = std::find(edgelist.begin(), edgelist.end(), (target, src))!=0){ //zweiter iterator unnötig??
		return findEdge;
	}else{
		Edge *newedge = new Edge(src, target);
		edgelist.insert(newedge);
		return newedge;
	}
}

Edge getEdge(const Sequence& src, const Sequence& target){
	Node srcnode = src.getNode();
	Node targetnode = target.getNode();
	if (srcnode ==0){//eine der beiden nodes leer? neuen erstellen
		srcnode = new Node(src);
	}
	if (targetnode ==0){
			targetnode = new Node(target);
		}
	return getEdge(srcnode, targetnode); //edge zw. src und target zurückgeben
}



//TODO unvollständig

std::istream& operator >> (std::istream& strm, Graph& graph){

    if(!strm.good()) //Returns true if none of the stream's error state flags (eofbit, failbit and badbit) is set.
        return strm;
    

    char buf[4096];
    unsigned int currentchar = 0;
    
   // fstream datei("fragments.fta",ios::in);
	
    while(strm.good())
    {
        strm.getline(&buf[0], 4096);
    

        if(!seq.isValid())
        {
            std::cout << "Skip: '" << seq << "'" << std::endl;
            continue;
        }
    
    
    datei.close();
}


