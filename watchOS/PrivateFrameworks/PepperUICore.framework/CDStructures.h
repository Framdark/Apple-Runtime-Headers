//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    float m11;
    float m12;
    float m13;
    float m14;
    float m21;
    float m22;
    float m23;
    float m24;
    float m31;
    float m32;
    float m33;
    float m34;
    float m41;
    float m42;
    float m43;
    float m44;
};

struct CGAffineTransform {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
};

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct SpecValues {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    _Bool _field9;
};

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct UIOffset {
    float horizontal;
    float vertical;
};

struct _AnimatedEmojiSpecification {
    int animatedEmojiType;
    char *name;
    _Bool loops;
    char *posterImageName;
    int panningChooserType;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

struct _opaque_pthread_mutex_t {
    long __sig;
    char __opaque[40];
};

struct vector<PUICNotch, std::__1::allocator<PUICNotch>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<PUICNotch *, std::__1::allocator<PUICNotch>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> {
        void *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int section;
    unsigned int item;
} CDStruct_55d6b361;

typedef struct {
    unsigned int _field1;
    double _field2[8];
    double _field3[8];
} CDStruct_32e70f54;

typedef struct {
    float start;
    float startWithOffset;
    unsigned int startEdgeType;
    float end;
    float endWithOffset;
    unsigned int endEdgeType;
    float restingPosition;
} CDStruct_b31d0695;

typedef struct CDStruct_183601bc;

typedef struct {
    _Bool displayedTextChanged;
    _Bool selectionRangeChanged;
    struct _NSRange insertionRange;
} CDStruct_55c8205d;

typedef struct {
    CDStruct_55d6b361 first;
    CDStruct_55d6b361 last;
} CDStruct_ec62c677;

// Ambiguous groups
typedef struct {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
} CDStruct_a12fb154;

