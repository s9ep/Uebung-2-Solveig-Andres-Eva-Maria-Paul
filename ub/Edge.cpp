#include "Edge.h"



/*
 * Default - Konstruktor
 */
Edge::Edge(){
    Edge::target=0;
    Edge::source=0;
}


/*
 * Copy - Konstruktor
 */
Edge::Edge(const Edge& edge){
    Edge::target=edge:getTarget();
    Edge::source=edge:getSource();
}

/*
 * Detailed - Konstruktor
 */
Edge(const Node& s, const Node& t){
    Edge::source=s;
    Edge::target=t;
}







Edge::~Edge() {
	// TODO Auto-generated destructor stub
}

