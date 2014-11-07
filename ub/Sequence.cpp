#include "Sequence.h"
#include <string.h>
#include <iostream>
#include <string>
#include <stdio.h>

template <class InputIterator1, class InputIterator2>

//default constructor
Sequence::Sequence(){
	}

//destructor
Sequence::~ Sequence (){
	
	}
//copy constructor
Sequence(const Sequence& seq){
	sequence_ = seq.sequence_;
	}

//detailed constructor
Sequence(const std::string& seq){
	sequence_ = seq;
}

void Sequence::clear(){
	sequence_.clear();
}

bool Sequence::compare(const Sequence& seq, unsigned int i) {
	int begin = sequence_.length()-i;
	if begin <1 {
		return false;
	}
	else {
		std::string first1;
		first1 = sequence_.c_str()+i;
		std::string first2;
		first2 = seq.sequence_.c_str();
		if (strcmp (first1, first2)==0) {
			return true;		
		}else{
			return false;
		}
	}	
}



