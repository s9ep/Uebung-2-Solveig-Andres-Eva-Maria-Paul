#ifndef NODE_H_
#define NODE_H_

#include "Node.h"
#include "Sequence.h"
#include "Edge.h"
#include <vector>
#include <list>

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
     * Gibt die Liste aller ausgehenden Kanten zurück
     */
    std::vector<Edge> getOutEdges() const;
    
    /*
     * erstellt eine Kante von diesem zum übergebenen Knoten mit korrekten Kantengewicht
     */
    Edge buildEdgeTo(Node &node);
    
    /*
     * falls eine ausgehende Kante zu node besteht, wird diese entfernt
     */
    void removeEdgeTo(Node& node);
    
    

    
private:
    std::string* newseq;
    std::list<Edge> inedge;
    std::list<Edge> outedge;
    Edge edgearray[inedge][outedge];

    
    
    
};



#endif /* NODE_H_ */
