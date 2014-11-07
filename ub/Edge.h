/*
 * Edge.h
 *
 *  Created on: Nov 7, 2014
 *      Author: s9evpaul
 */

#ifndef EDGE_H_
#define EDGE_H_

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
     * Destruktor
     */
	virtual ~Edge();
    
    /*
     * Zuweisungsoperator
     */
    
    
    /* 
     * liefert den Ausgangsknoten der Kante zurueck
     */
    const Node& getSource() const
    
    /*
     * liefert den Zielknoten der Kante zurueck
     */
    const Node& getTarget() const
    
    /*
     * liefert die Ueberlappung der Knoten zurueck
     */
    unsigned int getOverlap() const
    
private:
    Node& source;
    Node& target;
};

#endif /* EDGE_H_ */
