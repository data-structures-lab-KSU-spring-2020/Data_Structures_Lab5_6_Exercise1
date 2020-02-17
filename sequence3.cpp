#include <iostream>     // Provides cout.
#include <cstdlib>      // Provides size_t.
#include "sequence3.h"  // Provides the sequence class with double items.
#include <assert.h>
using namespace std;
using namespace main_savitch_5;


// CONSTRUCTORS and DESTRUCTOR
sequence::sequence( ) {
	head_ptr = NULL;
	tail_ptr = NULL;
	cursor = NULL;
	precursor = NULL;
	many_nodes = 0;
}

sequence::sequence(const sequence& source){
	list_copy(source.head_ptr, head_ptr, tail_ptr);
	many_nodes = source.many_nodes;
	precursor = NULL;
	cursor = head_ptr;
}

sequence::~sequence( ) {
	list_clear(head_ptr);
	many_nodes = 0;
}

// MODIFICATION MEMBER FUNCTIONS
void sequence::start( ) {
	if (is_item()){
		cursor = head_ptr;
	}
}

void sequence::advance( ) {
	try {
		assert(is_item());
	}
	catch (int e){
		cout << "Error with advance function" << endl;
	}
	precursor = cursor;
	cursor = cursor -> link();
}

void sequence::insert(const value_type& entry) {
	if (!is_item()){
		list_head_insert(head_ptr, entry);
		cursor = head_ptr;
		tail_ptr = head_ptr;
		many_nodes ++;
	}
	else {
		node *temp = new node(entry, cursor);
		precursor -> set_link(temp);
		cursor = temp;
		delete [] temp;
		many_nodes ++;
	}
}

void sequence::attach(const value_type& entry) {
	if (is_item()){
		if (cursor != tail_ptr){
			list_insert(precursor, entry);
			precursor = cursor;
			cursor = cursor -> link();
		}
		else {
			list_insert(tail_ptr, entry);
			precursor = cursor;
			cursor = cursor -> link();
			tail_ptr = tail_ptr -> link();
		}
	}
	if (!is_item()){
		if (head_ptr == NULL){
			list_head_insert(head_ptr, entry);
			cursor = head_ptr;
			tail_ptr = head_ptr;
			precursor = NULL;
		}
		else if (tail_ptr == NULL){
			precursor = list_locate(head_ptr, list_length(head_ptr));
			list_insert(precursor, entry);
			cursor = precursor -> link();
			tail_ptr = cursor;
		}
		else {
			list_insert(tail_ptr, entry);
			precursor = tail_ptr;
			cursor = precursor -> link();
			tail_ptr = tail_ptr -> link();
		}
	}
	many_nodes ++;
}

void sequence::operator =(const sequence& source) {
	if (!is_item()){
		head_ptr = NULL;
		tail_ptr = NULL;
		cursor = NULL;
		precursor = NULL;
		many_nodes = 0;
	}
	else {
		list_copy(source.head_ptr, head_ptr, tail_ptr);
		cursor = head_ptr;
		many_nodes = source.many_nodes;
	}
}

void sequence::remove_current( ) {
	precursor -> set_link(cursor -> link());
	cursor = precursor -> link();
	many_nodes --;
}

// CONSTANT MEMBER FUNCTIONS

sequence::value_type sequence::current( ) const {
	try {
		assert (is_item());
	}
	catch (int e) {
		cout << "Error with 'current' function." << endl;
	}
	return cursor -> data();
}



