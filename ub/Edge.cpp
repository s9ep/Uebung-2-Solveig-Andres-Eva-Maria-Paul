#include "Edge.h"



/*
 * Default - Konstruktor
 */
Edge::Edge():Edge{
    Edge::target=0;
    Edge::source=0;
}
/*
 * Copy - Konstruktor
 */
Edge::Edge(const Edge& edge):edge(Edge){
    Edge::target=edge.getTarget();
    Edge::source=edge.getSource();
}

/*
 * Detailed - Konstruktor
 */
Edge(Node& s,Node& t){
    Edge::source=s;
    Edge::target=t;
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

