#ifndef NODE_H_
#define NODE_H_

#include "Node.h"
#include "Sequence.h"
#include "Edge.h"
#include <vector>
#include <list>
#include <string.h>
#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>

class Node {
public:
    /*
     * Default - Konstruktor
     */
	Node();
    
    /*
     * Copy - Konstruktor
     */
    Node(const Node& node);
    
    /*
     * Detailed Konstruktor
     */
    explicit Node(const Sequence& sequence);
    
    /*
     * Destruktor
     */
    virtual ~Node();
    
    /*
     * Zuweisungsoperatorator "="
     */
    Node& operator=(const Node& node);
    
    /*
     * Operator "=="
     */
    bool operator==(const Node& node) const;
    
    /*
     * Operator "!="
     */
    bool operator!=(const Node& node) const;
    
    /*
     * Gibt die Liste aller ausgehenden Kanten zurueck
     */
    std::vector<Edge> getOutEdges() const;
    
    /*
    * Gibt die Liste aller eingehenden Kanten zurueck
    */
    std::vector<Edge> getInEdges() const;
    
    /*
     * erstellt eine Kante von diesem zum uebergebenen Knoten mit korrekten Kantengewicht
     */
    Edge buildEdgeTo(Node &node);
    
    /*
     * falls eine ausgehende Kante zu node besteht, wird diese entfernt
     */
    void removeEdgeTo(Node& node);
    


    
public:
    
    Sequence sequence_;        // Sequenz
    std::vector<Edge> inedges;  //eingehenden Kanten
    std::vector<Edge> outedges; //ausgehenden Kanten

    

    
    
    
};



#endif /* NODE_H_ */
