/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_opencurve_curve_fs_libfs_CurveFSMount */

#ifndef _Included_io_opencurve_curve_fs_libfs_CurveFSMount
#define _Included_io_opencurve_curve_fs_libfs_CurveFSMount
#ifdef __cplusplus
extern "C" {
#endif
#undef io_opencurve_curve_fs_libfs_CurveFSMount_O_RDONLY
#define io_opencurve_curve_fs_libfs_CurveFSMount_O_RDONLY 1L
#undef io_opencurve_curve_fs_libfs_CurveFSMount_O_RDWR
#define io_opencurve_curve_fs_libfs_CurveFSMount_O_RDWR 2L
#undef io_opencurve_curve_fs_libfs_CurveFSMount_O_APPEND
#define io_opencurve_curve_fs_libfs_CurveFSMount_O_APPEND 4L
#undef io_opencurve_curve_fs_libfs_CurveFSMount_O_CREAT
#define io_opencurve_curve_fs_libfs_CurveFSMount_O_CREAT 8L
#undef io_opencurve_curve_fs_libfs_CurveFSMount_O_TRUNC
#define io_opencurve_curve_fs_libfs_CurveFSMount_O_TRUNC 16L
#undef io_opencurve_curve_fs_libfs_CurveFSMount_O_EXCL
#define io_opencurve_curve_fs_libfs_CurveFSMount_O_EXCL 32L
#undef io_opencurve_curve_fs_libfs_CurveFSMount_O_WRONLY
#define io_opencurve_curve_fs_libfs_CurveFSMount_O_WRONLY 64L
#undef io_opencurve_curve_fs_libfs_CurveFSMount_O_DIRECTORY
#define io_opencurve_curve_fs_libfs_CurveFSMount_O_DIRECTORY 128L
#undef io_opencurve_curve_fs_libfs_CurveFSMount_SEEK_SET
#define io_opencurve_curve_fs_libfs_CurveFSMount_SEEK_SET 0L
#undef io_opencurve_curve_fs_libfs_CurveFSMount_SEEK_CUR
#define io_opencurve_curve_fs_libfs_CurveFSMount_SEEK_CUR 1L
#undef io_opencurve_curve_fs_libfs_CurveFSMount_SEEK_END
#define io_opencurve_curve_fs_libfs_CurveFSMount_SEEK_END 2L
#undef io_opencurve_curve_fs_libfs_CurveFSMount_SETATTR_MODE
#define io_opencurve_curve_fs_libfs_CurveFSMount_SETATTR_MODE 1L
#undef io_opencurve_curve_fs_libfs_CurveFSMount_SETATTR_UID
#define io_opencurve_curve_fs_libfs_CurveFSMount_SETATTR_UID 2L
#undef io_opencurve_curve_fs_libfs_CurveFSMount_SETATTR_GID
#define io_opencurve_curve_fs_libfs_CurveFSMount_SETATTR_GID 4L
#undef io_opencurve_curve_fs_libfs_CurveFSMount_SETATTR_MTIME
#define io_opencurve_curve_fs_libfs_CurveFSMount_SETATTR_MTIME 8L
#undef io_opencurve_curve_fs_libfs_CurveFSMount_SETATTR_ATIME
#define io_opencurve_curve_fs_libfs_CurveFSMount_SETATTR_ATIME 16L
/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSCreate
  (JNIEnv *, jobject);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSRelease
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSRelease
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSConfSet
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSConfSet
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSMount
 * Signature: (JLjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSMount
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSUmount
 * Signature: (JLjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSUmount
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSMkDirs
 * Signature: (JLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSMkDirs
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSRmDir
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSRmDir
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSListDir
 * Signature: (JLjava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSListDir
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSOpen
 * Signature: (JLjava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSOpen
  (JNIEnv *, jclass, jlong, jstring, jint, jint);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSLSeek
 * Signature: (JIJI)J
 */
JNIEXPORT jlong JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSLSeek
  (JNIEnv *, jclass, jlong, jint, jlong, jint);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativieCurveFSRead
 * Signature: (JI[BJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativieCurveFSRead
  (JNIEnv *, jclass, jlong, jint, jbyteArray, jlong, jlong);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativieCurveFSWrite
 * Signature: (JI[BJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativieCurveFSWrite
  (JNIEnv *, jclass, jlong, jint, jbyteArray, jlong, jlong);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSFSync
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSFSync
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSClose
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSClose
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSUnlink
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSUnlink
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSStatFs
 * Signature: (JLio/opencurve/curve/fs/libfs/CurveFSStatVFS;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSStatFs
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSLstat
 * Signature: (JLjava/lang/String;Lio/opencurve/curve/fs/libfs/CurveFSStat;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSLstat
  (JNIEnv *, jclass, jlong, jstring, jobject);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSFStat
 * Signature: (JILio/opencurve/curve/fs/libfs/CurveFSStat;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSFStat
  (JNIEnv *, jclass, jlong, jint, jobject);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSSetAttr
 * Signature: (JLjava/lang/String;Lio/opencurve/curve/fs/libfs/CurveFSStat;I)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSSetAttr
  (JNIEnv *, jclass, jlong, jstring, jobject, jint);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSChmod
 * Signature: (JLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSChmod
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSChown
 * Signature: (JLjava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSChown
  (JNIEnv *, jclass, jlong, jstring, jint, jint);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFSMount
 * Method:    nativeCurveFSRename
 * Signature: (JLjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFSMount_nativeCurveFSRename
  (JNIEnv *, jclass, jlong, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif
