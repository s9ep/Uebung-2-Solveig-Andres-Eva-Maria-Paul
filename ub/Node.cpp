#include "Node.h"
#include "Sequence.h"
#include "Edge.h"


/*
 * Default - Konstruktor
 */
/*Node::Node(){
}*/

/*
 * Copy - Konstruktor
 */
Node::Node(const Node& node):sequence_(node.sequence_),inedges(node.getInEdges()),outedges(node.getOutEdges()){
}

/*
 * Detailed Konstruktor
 */
Node::Node(const Sequence& sequence):sequence_(node.sequence_){
}



/*
 * Zuweisungsoperatorator "="
 */
Node& Node::operator=(const Node& node){
    sequence_= node.sequence_;
    inedges=node.getInEdges();
    outedges=node.getOutEdges();
    
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
	
	




