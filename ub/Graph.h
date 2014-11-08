/*
 * Graph.h
 *
 *  Created on: Nov 7, 2014
 *      Author: s9evpaul
 */

#ifndef GRAPH_H_
#define GRAPH_H_

class Graph {
public:
	Graph();
	virtual ~Graph();
	Graph(const Graph& g);



	//methods

	bool hasNode(const Sequence& seq)const;
	Node& getNode(const Sequence& seq);
	void removeNode(Node& node);
	Edge getEdge(Node& src, Node& target);
	Edge getEdge(const Sequence& src, const Sequence& target);


};

std::istream& operator>>(std::istream& strm, Graph& graph);


#endif /* GRAPH_H_ */
