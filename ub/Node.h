/*
 * Node.h
 *
 *  Created on: Nov 7, 2014
 *      Author: s9evpaul
 */

#ifndef NODE_H_
#define NODE_H_

class Node {
public:
    /*
     * Default - Konstruktor
     */
	Node();
    
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

    
    
    
    
    
};



#endif /* NODE_H_ */
