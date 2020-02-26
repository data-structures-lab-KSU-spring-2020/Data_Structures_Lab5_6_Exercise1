// Travis Hescox
// CS3305L
// Section 2
// Lab Assignment 5

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
	if (head_ptr == NULL && tail_ptr == NULL) {
		cursor = NULL;
		precursor = NULL;
	} 
	else if (source.precursor == source.tail_ptr){
		cursor = NULL;
		precursor = tail_ptr;
	}
	else if (source.precursor == NULL && source.cursor == source.head_ptr){
		precursor = NULL;
		cursor = head_ptr;
	}
	else {
		node * temp_cursor = source.head_ptr;
		node * temp_precursor = NULL;
		int count = 0;
		while (temp_cursor != source.cursor){
			count ++;
			temp_precursor = temp_cursor;
			temp_cursor = temp_cursor -> link();
		}
		temp_precursor = head_ptr;
		for (int i = 0; i < count - 1; i++ ) {
			temp_precursor = temp_precursor -> link();
		}
		precursor = temp_precursor;
		cursor = temp_precursor -> link();
	}
	many_nodes = source.many_nodes;
}
	

sequence::~sequence( ) {
	list_clear(head_ptr);
	many_nodes = 0;
}

// MODIFICATION MEMBER FUNCTIONS
void sequence::start( ) {
	cursor = head_ptr;
	precursor = NULL;
}

void sequence::advance( ) {
	if (is_item()){
		if (cursor == tail_ptr){
			precursor = cursor;
			cursor = NULL;
		} else if (cursor == NULL && precursor == tail_ptr) {
			cursor = head_ptr;
			precursor = NULL;
		} else {
			precursor = cursor;
			cursor = cursor -> link();
		}
	}
}

void sequence::insert(const value_type& entry) {
	if (cursor == NULL){
		if (head_ptr == NULL) {
			list_head_insert(head_ptr, entry);
			cursor = head_ptr;
			precursor = NULL;
			tail_ptr = head_ptr;
		} else {
			list_head_insert(head_ptr, entry);
			cursor = head_ptr;
			precursor = NULL;
		}
	} else if (cursor == head_ptr) {
			list_head_insert(head_ptr, entry);
			cursor = head_ptr;
			precursor = NULL;
			
	} else {
		list_insert(precursor, entry);
		cursor = precursor -> link();
	}
	many_nodes++;
}

void sequence::attach(const value_type& entry) {
	if (cursor == NULL) {
		if (head_ptr == NULL) {
			list_head_insert(head_ptr, entry);
			cursor = head_ptr;
			precursor = NULL;
			tail_ptr = head_ptr;
		} else {
			list_insert(tail_ptr, entry);
			precursor = tail_ptr;
			tail_ptr = tail_ptr -> link();
			cursor = tail_ptr;
		}
	} else if (cursor == tail_ptr) {
			list_insert(tail_ptr, entry);
			precursor = tail_ptr;
			cursor = cursor -> link();
			tail_ptr = tail_ptr -> link();
			
	} else {
		list_insert(cursor, entry);
		precursor = cursor;
		cursor = cursor -> link();
	}
	many_nodes++;
/*	node * test = head_ptr;
	cout << "*********************   "; 
	while (test != NULL){
		cout << test->data() << ", "; 
		test = test -> link();
	}
	cout << "   *********************"; */
}

void sequence::operator =(const sequence& source) {
	if (head_ptr == source.head_ptr) {
		return;
	}
	list_copy(source.head_ptr, head_ptr, tail_ptr);
	if (head_ptr == NULL && tail_ptr == NULL) {
		cursor = NULL;
		precursor = NULL;
	} 
	else if (source.precursor == source.tail_ptr){
		cursor = NULL;
		precursor = tail_ptr;
	}
	else if (source.precursor == NULL && source.cursor == source.head_ptr){
		precursor = NULL;
		cursor = head_ptr;
	}
	else {
		node * temp_cursor = source.head_ptr;
		node * temp_precursor = NULL;
		int count = 0;
		while (temp_cursor != source.cursor){
			count ++;
			temp_precursor = temp_cursor;
			temp_cursor = temp_cursor -> link();
		}
		temp_precursor = head_ptr;
		for (int i = 0; i < count - 1; i++ ) {
			temp_precursor = temp_precursor -> link();
		}
		precursor = temp_precursor;
		cursor = temp_precursor -> link();
	}
	many_nodes = source.many_nodes;
}


void sequence::remove_current( ) {
	if (head_ptr == NULL || !is_item()) {
		return;
	} else if (head_ptr == tail_ptr){
		head_ptr = NULL;
		cursor = NULL;
	} else if (precursor == NULL){
		head_ptr = cursor -> link();
		cursor = head_ptr;
	} else if (cursor == tail_ptr){
		precursor -> set_link(cursor -> link());
		cursor = NULL;
		tail_ptr = precursor;
	} else {
		precursor -> set_link(cursor -> link());
		cursor = precursor -> link();
	}
	many_nodes--;
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



