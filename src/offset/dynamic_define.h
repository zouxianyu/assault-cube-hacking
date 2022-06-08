#ifndef ASSAULT_CUBE_HACKING_OFFSET_DYNAMIC_DEFINE_H
#define ASSAULT_CUBE_HACKING_OFFSET_DYNAMIC_DEFINE_H

#define STR_MERGE_IMPL(a, b) a##b
#define STR_MERGE(a, b) STR_MERGE_IMPL(a, b)
#define MAKE_PAD(size) STR_MERGE(_pad, __COUNTER__)[size]
#define DEFINE_MEMBER_N(type, name, offset) struct {unsigned char MAKE_PAD(offset); type name;}

#endif //ASSAULT_CUBE_HACKING_OFFSET_DYNAMIC_DEFINE_H