/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DVectorN3DDataBuffer : TSCH3DDataBuffer {
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { 
            char *__first_; 
        } __end_cap_; 
    }  mContainer;
    struct DataBuffer3DDimension { 
        struct tvec3<int> { 
            union { 
                int x; 
                int r; 
                int s; 
            } ; 
            union { 
                int y; 
                int g; 
                int t; 
            } ; 
            union { 
                int z; 
                int b; 
                int p; 
            } ; 
        } mSize; 
        unsigned int mComponents; 
    }  mDimension;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<unsigned char' */ struct *container; /* unknown property attribute:  std::__1::allocator<unsigned char> >=*}} */

+ (id)bufferWithCapacity3DDimension:(const struct DataBuffer3DDimension { struct tvec3<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; union { int x_3_2_1; int x_3_2_2; int x_3_2_3; } x_1_1_3; } x1; unsigned int x2; }*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)componentByteSize;
- (int)componentType;
- (unsigned int)components;
- (struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *x1; char *x2; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *x_3_1_1; } x3; }*)container;
- (unsigned int)count;
- (const void*)data;
- (void)fillCapacity;
- (id)initWithCapacity3DDimension:(const struct DataBuffer3DDimension { struct tvec3<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; union { int x_3_2_1; int x_3_2_2; int x_3_2_3; } x_1_1_3; } x1; unsigned int x2; }*)arg1;
- (struct tvec3<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; union { int x_3_1_1; int x_3_1_2; int x_3_1_3; } x3; })size;

@end
