#include "Edge.h"

/*
 * Default - Konstruktor
 */
/*Edge::Edge(){

}*/

/*
 * Copy - Konstruktor
 */
Edge::Edge(const Edge& edge):target(edge.target),source(edge.source){
 }

/*
 * Detailed - Konstruktor
 */
Edge::Edge(const Node& s, const Node& t):target(t),source(s){
    
    }

/*
 * Destruktor
 */

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

/*
 * liefert den Ausgangsknoten der Kante zurueck
 */
const Node& Edge::getSource() const{
    return Edge::source;
}
/*
 * liefert den Zielknoten der Kante zurueck
 */
const Node& Edge::getTarget() const{
    return Edge::target;
}

/*
 * liefert die Ueberlappung der Knoten zurueck
 */
unsigned int Edge::getOverlap() const{
    // TODO
    return 0;
}







