#ifndef ADDERLIB_ADDER_H
#define ADDERLIB_ADDER_H
// This is a so called include guard. It is put here
// to make sure this header file is included only once
// in another file. It is not always easy to avoid multiple
// inclusions without such a guard. For example when one
// file includes the other and vice versa very complicated
// and unhealthy inclusion patterns might arrise.
//
// Include guard names need to be unique. To minimise the
// chances on clashes, the names or often prefixed with
// the name of the library to which they belong.
// This is a declaration
// It is needed both where the function is defined
// and where it is used. So we put it in a separate
// header file to allow for it to be included at
// two places.
float adder(int a, int b);
#endif
