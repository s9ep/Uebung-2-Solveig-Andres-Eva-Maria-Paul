#include "Protein.h"

//default constructor
Protein::Protein(){
	}

//copy constructor
Protein(const Protein& seq):Sequence{
	}

bool Protein::isValid()const{
return sequence_.find_first_not_of("ACDEFGHIKLMNPQRSTVWY")==std::string::npos;
}

/**
//destructor
Protein::~Protein(){
	}
	
**/
