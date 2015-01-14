// Playground - noun: a place where people can play

import Cocoa

var a = 13
var b = 5
var c = 10

// Cannot create pointers in SWIFT

var aFakePointer = a
var bFakePointer = b
var cFakePointer = c

// Since I cannot use pointer, I am going to create a functiona and practice using in-out parameters to change values by reference

func updateInitialValues(inout a: Int, inout b: Int, inout c: Int) {
    a = a*2
    c++
    b = b + 4
}

updateInitialValues(&a, &b, &c)

// Initial Values successfully updated with inout function
a
b
c

// Fake pointers NOT updated as expected since everything was passed by values (i.e. they are copies not pointers and so of course they did not change

aFakePointer
bFakePointer
cFakePointer




