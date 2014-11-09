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
bool Node::operator==(const Node &node) const {
    return ((sequence_==node.sequence_)&&(inedges==node.inedges)&&(outedges==node.outedges));
}

/*
 * Operator "!="
 */
bool Node::operator!=(const Node &node) const {
    return !((sequence_==node.sequence_)&&(inedges==node.inedges)&&(outedges==node.outedges));
}
/*
* Gibt die Liste aller ausgehenden Kanten zurueck
*/
std::vector<Edge> getOutEdges() const {
    return Node::outedges;
}
/*
* Gibt die Liste aller eingehenden Kanten zurueck
*/
std::vector<Edge> getInEdges() const {
    return Node::inedges;
}
/*
* erstellt eine Kante von diesem zum uebergebenen Knoten mit korrekten Kantengewicht
*/

Edge buildEdgeTo(Node& node){
    Edge edge = new Edge(*this, node); // neue Kante
    Node::outedges.push_back[edge]; //fuege neue Ausgehende Kante hinzu --> Kantengewicht wird in  "Edge" autmatisch geupdatet
    return edge;
}

/*
* falls eine ausgehende Kante zu node besteht, wird diese entfernt
*/
void removeEdgeTo(Node& node){
if(!Node::outedges.empty()){
    for (std::vector<Edge>::iterator edge=Node::outedges.begin();  edge!=Node::outedges.end(); ) {
      it = Edge::outedges.erase(it); // ausgehende Kante wird geloescht
  else
      ++it;
 }
    




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






