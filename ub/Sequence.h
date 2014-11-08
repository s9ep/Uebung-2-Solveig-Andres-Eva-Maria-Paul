#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <string>

class Sequence{

public:
	//************ CONSTRUCTOR ********************/
	// Default - Constructor
	Sequence();

	//Copy - Constructor
	explicit Sequence(const Sequence& seq);

	//Detailed - Constructor
	Sequence(const std::string& seq);






	//************ DESTRUCTOR ********************/
	//Destructor
	virtual ~Sequence();






	//************ OPERATOR ********************/

	// Assignment - Operator "="
	Sequence& operator=(const Sequence& seq);
	
	// Equality - Operator "=="
	bool operator==(const Sequence& seq) const;
	
	// Inequality - Operator "!="
    bool operator!=(const Sequence& seq) const;
	
	// ">>"
	// TODO
	//friend std::ostream& operator<<(std::ostream&, const Sequence&);

	// "<<"
	// TODO
	//friend std::istream& operator>>(std::istream&, Sequence&);






	//************ METHODS ********************/

	/**
	*
	**/
	bool compare(const Sequence& seq, unsigned int i) const;

	/**
	*
	**/
	unsigned int overlap(const Sequence& seq) const;

	/**
	*
	**/
	virtual bool isValid() const = 0;

    virtual void clear();




protected:
	// Sequence
	std::string sequence_;


};

std::ostream& operator<<(std::ostream&, const Sequence&);
std::istream& operator>>(std::istream&, Sequence&);

#endif
