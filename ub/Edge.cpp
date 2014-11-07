#include "Edge.h"



/*
 * Default - Konstruktor
 */
Edge::Edge():target(),source(){
    
}

/*
 * Copy - Konstruktor
 */
Edge::Edge(const Edge& edge):target(edge.target),source(edge.source){
 
}

/*
 * Detailed - Konstruktor
 */
Edge(const Node& s, const Node& t):target(t),source(s){
}

/*
 * Zuweisungsoperatorator "="
 */
Edge& operator=(const Edge& edge){
    Edge::target=edge.getTarget();
    Edge::source=edge.getSource()
}

/*
 * Operator "=="
 */
bool operator==(const Edge& edge) const;

/*
 * Operator "!="
 */
bool operator!=(const Edge& edge) const;









Edge::~Edge() {
	// TODO Auto-generated destructor stub
}

