/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_newsclub_net_unix_NativeUnixSocket */

#ifndef _Included_org_newsclub_net_unix_NativeUnixSocket
#define _Included_org_newsclub_net_unix_NativeUnixSocket
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    bind
 * Signature: ([BLjava/io/FileDescriptor;I)J
 */
JNIEXPORT jlong JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_bind
  (JNIEnv *, jclass, jbyteArray, jobject, jint);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    listen
 * Signature: (Ljava/io/FileDescriptor;I)V
 */
JNIEXPORT void JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_listen
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    accept
 * Signature: ([BLjava/io/FileDescriptor;Ljava/io/FileDescriptor;J)V
 */
JNIEXPORT void JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_accept
  (JNIEnv *, jclass, jbyteArray, jobject, jobject, jlong);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    connect
 * Signature: ([BLjava/io/FileDescriptor;J)V
 */
JNIEXPORT void JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_connect
  (JNIEnv *, jclass, jbyteArray, jobject, jlong);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    read
 * Signature: (Lorg/newsclub/net/unix/AFUNIXSocketImpl;Ljava/io/FileDescriptor;[BIILjava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_read
  (JNIEnv *, jclass, jobject, jobject, jbyteArray, jint, jint, jobject);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    write
 * Signature: (Lorg/newsclub/net/unix/AFUNIXSocketImpl;Ljava/io/FileDescriptor;[BII[I)I
 */
JNIEXPORT jint JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_write
  (JNIEnv *, jclass, jobject, jobject, jbyteArray, jint, jint, jintArray);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    close
 * Signature: (Ljava/io/FileDescriptor;)V
 */
JNIEXPORT void JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_close
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    shutdown
 * Signature: (Ljava/io/FileDescriptor;I)V
 */
JNIEXPORT void JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_shutdown
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    getSocketOptionInt
 * Signature: (Ljava/io/FileDescriptor;I)I
 */
JNIEXPORT jint JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_getSocketOptionInt
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    setSocketOptionInt
 * Signature: (Ljava/io/FileDescriptor;II)V
 */
JNIEXPORT void JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_setSocketOptionInt
  (JNIEnv *, jclass, jobject, jint, jint);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    available
 * Signature: (Ljava/io/FileDescriptor;)I
 */
JNIEXPORT jint JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_available
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    peerCredentials
 * Signature: (Ljava/io/FileDescriptor;Lorg/newsclub/net/unix/AFUNIXSocketCredentials;)Lorg/newsclub/net/unix/AFUNIXSocketCredentials;
 */
JNIEXPORT jobject JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_peerCredentials
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    initServerImpl
 * Signature: (Lorg/newsclub/net/unix/AFUNIXServerSocket;Lorg/newsclub/net/unix/AFUNIXSocketImpl;)V
 */
JNIEXPORT void JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_initServerImpl
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    setCreated
 * Signature: (Lorg/newsclub/net/unix/AFUNIXSocket;)V
 */
JNIEXPORT void JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_setCreated
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    setConnected
 * Signature: (Lorg/newsclub/net/unix/AFUNIXSocket;)V
 */
JNIEXPORT void JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_setConnected
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    setBound
 * Signature: (Lorg/newsclub/net/unix/AFUNIXSocket;)V
 */
JNIEXPORT void JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_setBound
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    setCreatedServer
 * Signature: (Lorg/newsclub/net/unix/AFUNIXServerSocket;)V
 */
JNIEXPORT void JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_setCreatedServer
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    setBoundServer
 * Signature: (Lorg/newsclub/net/unix/AFUNIXServerSocket;)V
 */
JNIEXPORT void JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_setBoundServer
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    setPort
 * Signature: (Lorg/newsclub/net/unix/AFUNIXSocketAddress;I)V
 */
JNIEXPORT void JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_setPort
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    initFD
 * Signature: (Ljava/io/FileDescriptor;I)V
 */
JNIEXPORT void JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_initFD
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    getFD
 * Signature: (Ljava/io/FileDescriptor;)I
 */
JNIEXPORT jint JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_getFD
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    attachCloseable
 * Signature: (Ljava/io/FileDescriptor;Ljava/io/Closeable;)V
 */
JNIEXPORT void JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_attachCloseable
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     org_newsclub_net_unix_NativeUnixSocket
 * Method:    maxAddressLength
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_newsclub_net_unix_NativeUnixSocket_maxAddressLength
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
