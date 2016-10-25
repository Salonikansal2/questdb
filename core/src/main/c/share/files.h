/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_questdb_misc_Files */

#ifndef _Included_com_questdb_misc_Files
#define _Included_com_questdb_misc_Files
#ifdef __cplusplus
extern "C" {
#endif
#undef com_questdb_misc_Files_DT_UNKNOWN
#define com_questdb_misc_Files_DT_UNKNOWN 0L
#undef com_questdb_misc_Files_DT_FIFO
#define com_questdb_misc_Files_DT_FIFO 1L
#undef com_questdb_misc_Files_DT_CHR
#define com_questdb_misc_Files_DT_CHR 2L
#undef com_questdb_misc_Files_DT_DIR
#define com_questdb_misc_Files_DT_DIR 4L
#undef com_questdb_misc_Files_DT_BLK
#define com_questdb_misc_Files_DT_BLK 6L
#undef com_questdb_misc_Files_DT_REG
#define com_questdb_misc_Files_DT_REG 8L
#undef com_questdb_misc_Files_DT_LNK
#define com_questdb_misc_Files_DT_LNK 10L
#undef com_questdb_misc_Files_DT_SOCK
#define com_questdb_misc_Files_DT_SOCK 12L
#undef com_questdb_misc_Files_DT_WHT
#define com_questdb_misc_Files_DT_WHT 14L
/*
 * Class:     com_questdb_misc_Files
 * Method:    append
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_com_questdb_misc_Files_append
        (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     com_questdb_misc_Files
 * Method:    close
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_questdb_misc_Files_close
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_questdb_misc_Files
 * Method:    findClose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_questdb_misc_Files_findClose
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_questdb_misc_Files
 * Method:    findName
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_questdb_misc_Files_findName
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_questdb_misc_Files
 * Method:    findNext
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_questdb_misc_Files_findNext
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_questdb_misc_Files
 * Method:    findType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_questdb_misc_Files_findType
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_questdb_misc_Files
 * Method:    getStdOutFd
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_questdb_misc_Files_getStdOutFd
        (JNIEnv *, jclass);

/*
 * Class:     com_questdb_misc_Files
 * Method:    truncate
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_questdb_misc_Files_truncate
        (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_questdb_misc_Files
 * Method:    remove
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_questdb_misc_Files_remove
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_questdb_misc_Files
 * Method:    read
 * Signature: (JJIJ)J
 */
JNIEXPORT jlong JNICALL Java_com_questdb_misc_Files_read
        (JNIEnv *, jclass, jlong, jlong, jint, jlong);

/*
 * Class:     com_questdb_misc_Files
 * Method:    sequentialRead
 * Signature: (JJI)J
 */
JNIEXPORT jlong JNICALL Java_com_questdb_misc_Files_sequentialRead
        (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     com_questdb_misc_Files
 * Method:    write
 * Signature: (JJIJ)J
 */
JNIEXPORT jlong JNICALL Java_com_questdb_misc_Files_write
        (JNIEnv *, jclass, jlong, jlong, jint, jlong);

/*
 * Class:     com_questdb_misc_Files
 * Method:    getLastModified
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_questdb_misc_Files_getLastModified
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_questdb_misc_Files
 * Method:    length
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_questdb_misc_Files_length
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_questdb_misc_Files
 * Method:    openRO
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_questdb_misc_Files_openRO
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_questdb_misc_Files
 * Method:    openRW
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_questdb_misc_Files_openRW
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_questdb_misc_Files
 * Method:    openAppend
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_questdb_misc_Files_openAppend
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_questdb_misc_Files
 * Method:    findFirst
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_questdb_misc_Files_findFirst
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_questdb_misc_Files
 * Method:    setLastModified
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_questdb_misc_Files_setLastModified
        (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_questdb_misc_Files
 * Method:    rename
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_questdb_misc_Files_rename
        (JNIEnv *, jclass, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
