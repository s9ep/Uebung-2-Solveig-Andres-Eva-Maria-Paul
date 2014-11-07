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
     * Zuweisungsoperatoratoren
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
    
    /*
     * setzt den Source - Knoten
     */
    void setSource(const Node& source_node);
    
    /*
     * setzt den Target - Knoten
     */
    void setSource(const Node& target_node);

    
private:
    Node& source;
    Node& target;
};

#endif /* EDGE_H_ */
