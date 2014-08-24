#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include <node.h>

using namespace v8;

class BinarySearchTree: public node::ObjectWrap {
	public:
		static void Init(Handle<Object>);

	protected:
		BinarySearchTree();
		virtual ~BinarySearchTree();

	private:
		static Handle<Value> New( const Arguments& );
		static Handle<Value> insert( const Arguments& );
		static Handle<Value> delete( const Arguments& );
		static Handle<Value> search( const Arguments& );
};

#endif