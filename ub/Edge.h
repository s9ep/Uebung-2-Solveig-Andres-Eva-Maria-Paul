#ifndef EDGE_H_
#define EDGE_H_

#include "node.h"


class Edge {
public:
    /*
     * Default - Konstruktor
     */
	Edge();
    
    /*
     * Copy - Konstruktor
     */
    Edge(const Edge& edge);
    
    /*
     * Detailed - Konstruktor
     */
    Edge(const Node& s, const Node& t);
    
    
    /*
     * Destruktor
     */
	virtual ~Edge();
    
    /*
     * Operator "=="
     */
    bool operator==(const Edge& edge) const;

    /*
     * Operator "!="
     */
    bool operator!=(const Edge& edge) const;
    
    /* 
     * liefert den Ausgangsknoten der Kante zurueck
     */
    const Node& getSource() const;
    
    /*
     * liefert den Zielknoten der Kante zurueck
     */
    const Node& getTarget() const;
    
    /*
     * liefert die Ueberlappung der Knoten zurueck
     */
    unsigned int getOverlap() const;
    
    
public:
    const Node& source;
    const Node& target;
    
};

#endif /* EDGE_H_ */
