#ifndef EDGE_H_
#define EDGE_H_

#include "Node.h"
#include "Sequence.h"
#include "Edge.h"
#include <string.h>
#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>


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
     ~Edge();
    
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
    
    /*
     * updated das Gewicht der Kante
     */
    void updateEdgeWeight();
    
    /*
     * gibt das Gewicht der Kante zurück
     */
    unsigned int getEdgeWeight();
    
public:
     Node source; // Startknoten
     Node target; // Zielknoten
    
    unsigned int edge_weight=0; // Kantengewicht
    
    
};

#endif /* EDGE_H_ */
