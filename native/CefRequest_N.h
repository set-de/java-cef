/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_cef_network_CefRequest_N */

#ifndef _Included_org_cef_network_CefRequest_N
#define _Included_org_cef_network_CefRequest_N
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_CefRequest_CTOR
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefRequest_1N_N_1CefRequest_1CTOR(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_GetIdentifier
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL
Java_org_cef_network_CefRequest_1N_N_1GetIdentifier(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_IsReadOnly
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL
Java_org_cef_network_CefRequest_1N_N_1IsReadOnly(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_GetURL
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_cef_network_CefRequest_1N_N_1GetURL(JNIEnv*,
                                                                       jobject);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_SetURL
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_cef_network_CefRequest_1N_N_1SetURL(JNIEnv*,
                                                                    jobject,
                                                                    jstring);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_GetMethod
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_cef_network_CefRequest_1N_N_1GetMethod(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_SetMethod
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_cef_network_CefRequest_1N_N_1SetMethod(JNIEnv*,
                                                                       jobject,
                                                                       jstring);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_SetReferrer
 * Signature: (Ljava/lang/String;Lorg/cef/network/CefRequest/ReferrerPolicy;)V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefRequest_1N_N_1SetReferrer(JNIEnv*,
                                                  jobject,
                                                  jstring,
                                                  jobject);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_GetReferrerURL
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_cef_network_CefRequest_1N_N_1GetReferrerURL(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_GetReferrerPolicy
 * Signature: ()Lorg/cef/network/CefRequest/ReferrerPolicy;
 */
JNIEXPORT jobject JNICALL
Java_org_cef_network_CefRequest_1N_N_1GetReferrerPolicy(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_GetPostData
 * Signature: ()Lorg/cef/network/CefPostData;
 */
JNIEXPORT jobject JNICALL
Java_org_cef_network_CefRequest_1N_N_1GetPostData(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_SetPostData
 * Signature: (Lorg/cef/network/CefPostData;)V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefRequest_1N_N_1SetPostData(JNIEnv*, jobject, jobject);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_GetHeaderMap
 * Signature: (Ljava/util/Map;)V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefRequest_1N_N_1GetHeaderMap(JNIEnv*, jobject, jobject);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_SetHeaderMap
 * Signature: (Ljava/util/Map;)V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefRequest_1N_N_1SetHeaderMap(JNIEnv*, jobject, jobject);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_Set
 * Signature:
 * (Ljava/lang/String;Ljava/lang/String;Lorg/cef/network/CefPostData;Ljava/util/Map;)V
 */
JNIEXPORT void JNICALL Java_org_cef_network_CefRequest_1N_N_1Set(JNIEnv*,
                                                                 jobject,
                                                                 jstring,
                                                                 jstring,
                                                                 jobject,
                                                                 jobject);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_GetFlags
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_cef_network_CefRequest_1N_N_1GetFlags(JNIEnv*,
                                                                      jobject);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_SetFlags
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_cef_network_CefRequest_1N_N_1SetFlags(JNIEnv*,
                                                                      jobject,
                                                                      jint);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_GetFirstPartyForCookies
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_cef_network_CefRequest_1N_N_1GetFirstPartyForCookies(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_SetFirstPartyForCookies
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefRequest_1N_N_1SetFirstPartyForCookies(JNIEnv*,
                                                              jobject,
                                                              jstring);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_GetResourceType
 * Signature: ()Lorg/cef/network/CefRequest/ResourceType;
 */
JNIEXPORT jobject JNICALL
Java_org_cef_network_CefRequest_1N_N_1GetResourceType(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_GetTransitionType
 * Signature: ()Lorg/cef/network/CefRequest/TransitionType;
 */
JNIEXPORT jobject JNICALL
Java_org_cef_network_CefRequest_1N_N_1GetTransitionType(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefRequest_N
 * Method:    N_CefRequest_DTOR
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefRequest_1N_N_1CefRequest_1DTOR(JNIEnv*, jobject);

#ifdef __cplusplus
}
#endif
#endif
