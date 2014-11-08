#include "Edge.h"



/*
 * Default - Konstruktor
 */
/*Edge::Edge():target(),source(){
}*/

/*
 * Copy - Konstruktor
 */
Edge::Edge(const Edge& edge):target(edge.target),source(edge.source){
 }

/*
 * Detailed - Konstruktor
 */
/*Edge:: Edge(const Node& s, const Node& t):target(t),source(s){
    source_vorhanden=true;
    target_vorhanden=true;
}*/


/*
 * Zuweisungsoperatorator "="
 */
Edge& Edge::operator=(const Edge& edge){
    target=edge.getTarget();
    source=edge.getSource();
    return *this;
}

/*
 * Operator "=="
 */
bool Edge::operator==(const Edge& edge) const {
    return (edge.source==Edge::source && edge.target==Edge::target);
}

/*
 * Operator "!="
 */
bool Edge::operator!=(const Edge& edge) const{
    return !(edge.source==Edge::source && edge.target==Edge::target);
}










Edge::~Edge() {
	// TODO Auto-generated destructor stub
}

