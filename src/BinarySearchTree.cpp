#define BUILDING_NODE_EXTENSION
#include <node.h>
#include <iostream>
#include "BinarySearchTree.h"

using namespace v8;

BinarySearchTree::BinarySearchTree() {};
BinarySearchTree::~BinarySearchTree() {};

Persistent<Function> constructor;

void
BinarySearchTree::Init( Handle<Object> target ) {

	Local<FunctionTemplate> tpl = FunctionTemplate::New( New );
	Local<String> name = String::NewSymbol( "BinarySearchTree" );

	tpl->SetClassName( name );
	tpl->InstanceTemplate()->SetInternalFieldCount( 3 );
	tpl->PrototypeTemplate()->Set(String::NewSymbol( "insert" ),
		FunctionTemplate::New(Insert)->GetFunction());
	tpl->PrototypeTemplate()->Set(String::NewSymbol( "delete" ),
		FunctionTemplate::New(Delete)->GetFunction());
	tpl->PrototypeTemplate()->Set(String::NewSymbol( "search" ),
		FunctionTemplate::New(search)->GetFunction());

	constructor = Persistent<Function>::New(tpl->GetFunction());
	target->Set(name, constructor);

}

Handle<Value>
BinarySearchTree::New( const Arguments& args ) {
	HandleScope scope;

	BinarySearchTree * obj = new BinarySearchTree();
	obj->Wrap( args.This() );

	return args.This();
}

Handle<Value>
BinarySearchTree::Insert( const Arguments& args ) {
	HandleScope scope;

	return scope.Close( Undefined() );
}

Handle<Value>
BinarySearchTree::Delete( const Arguments& args ) {
	HandleScope scope;

	return scope.Close( Undefined() );

}

Handle<Value>
BinarySearchTree::Search( const Arguments& args ) {
	HandleScope scope;

	return scope.Close( Undefined() );
}