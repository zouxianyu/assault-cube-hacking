#ifndef ASSAULT_CUBE_HACKING_ENTITY_OFFSET_OFFSET_HELPER_H
#define ASSAULT_CUBE_HACKING_ENTITY_OFFSET_OFFSET_HELPER_H

#include <cstdint>

// dynamic define
#define STR_MERGE_IMPL(a, b) a##b
#define STR_MERGE(a, b) STR_MERGE_IMPL(a, b)
#define MAKE_PAD(size) STR_MERGE(_pad, __COUNTER__)[size]
#define DEFINE_MEMBER_N(type, name, offset) struct {unsigned char MAKE_PAD(offset); type name;}

// offset
#define ADDRESS(t,c,m) (&(((c*)t)->m))

#endif //ASSAULT_CUBE_HACKING_ENTITY_OFFSET_OFFSET_HELPER_H
