/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class LIPIUIController */

#ifndef _Included_LIPIUIController
#define _Included_LIPIUIController
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     LIPIUIController
 * Method:    InitializeLipiEngine
 * Signature: ()V
 */
/**********************************************************************************
* AUTHOR		: Roopa S Teradal
* DATE			: 
* NAME			: Java_LIPIUIController_InitializeLipiEngine
* DESCRIPTION	: Loads lipiengine.dll into memory
* ARGUMENTS		: void
* RETURNS		: void
*
*************************************************************************************/
JNIEXPORT void JNICALL Java_LIPIUIController_InitializeLipiEngine
  (JNIEnv *, jobject);




/*
 * Class:     LIPIUIController
 * Method:    NewProjectJNI
 * Signature: (Ljava/lang/String;)V
 */
/**********************************************************************************
* AUTHOR		: Roopa S Teradal
* DATE			: 
* NAME			: Java_LIPIUIController_NewProjectJNI
* DESCRIPTION	: Creates the shape recognizer
* ARGUMENTS		: jstring ProjectName :Name of the to be created
* RETURNS		: void
*
*************************************************************************************/
JNIEXPORT void JNICALL Java_LIPIUIController_NewProjectJNI
  (JNIEnv *, jobject, jstring);

/*
 * Class:     LIPIUIController
 * Method:    LoadProjectJNI
 * Signature: (Ljava/lang/String;)V
 */
/**********************************************************************************
* AUTHOR		: Roopa S Teradal
* DATE			: 
* NAME			: Java_LIPIUIController_LoadProjectJNI
* DESCRIPTION	: Loads the project in to memory.
*				  LIPIJNIInterface calls the method (LoadModelData) of LIPITK
* ARGUMENTS		: jstring projectName :name of the project
* RETURNS		: void
*
*************************************************************************************/
JNIEXPORT void JNICALL Java_LIPIUIController_LoadProjectJNI
  (JNIEnv *, jobject,jstring);

/*
 * Class:     LIPIUIController
 * Method:    AddStrokeJNI
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
 */
/**********************************************************************************
* AUTHOR		: Roopa S Teradal
* DATE			: 
* NAME			: Java_LIPIUIController_AddStrokeJNI
* DESCRIPTION	:LIPITKJNIInterface calls a method of ListFileManager(AddEntryInTrainedListFile()) to add classid/sample to the list file
*				 LIPITKJNIInterface calls a method of LIPITK (UnloadModelData)
*                LIPITKJNIInterface calls a method(Train) of LIPITK to create the trained dat file
*                LIPITKJNIInterface calls a method of LIPITK (LoadModelData)
* ARGUMENTS		:jstring classID :class id to which to add the stroke
*				 jstring sampleclassaction :add a sample to existing class  or add new class along with the stroke data
*				 jboolean autoTrain :automatic training or manual
*
*
* RETURNS		: void
*
*************************************************************************************/
JNIEXPORT void JNICALL Java_LIPIUIController_AddStrokeJNI
  (JNIEnv *, jobject,jstring,jstring,jboolean);
/*
 * Class:     LIPIUIController
 * Method:    DeleteStrokeJNI
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
 */
/**********************************************************************************
* AUTHOR		: Roopa S Teradal
* DATE			: 
* NAME			: Java_LIPIUIController_DeleteStrokeJNI
* DESCRIPTION	: calls a method of ListFileManager(DeleteEntryFromListFile()) to delete classid/sample from the list file
*			      and re-arrange the class Ids
*				  LIPITKJNIInterface calls a method of LIPITK (UnloadModelData)
*				  LIPITKJNIInterface calls a method of LIPITK (Train)to create the trained dat file
*				  LIPITKJNIInterface calls a method of LIPITK (LoadModelData)
* ARGUMENTS		: jstring classId :class id to which to delete the stroke
*				  jstring sampleID :sample id to be deleted
*				  jstring sampleclassaction :delete a sample from existing class  
*				  jboolean autoTrain :automatic training or manual
*
* RETURNS		: void
*
*************************************************************************************/
JNIEXPORT void JNICALL Java_LIPIUIController_DeleteStrokeJNI
  (JNIEnv *, jobject, jstring,jstring,jstring,jstring, jboolean);

/*
 * Class:     LIPIUIController
 * Method:    RecognizeJNI
 * Signature: (LSignal;)[LLipitkResult;
 */
/**********************************************************************************
* AUTHOR		: Roopa S Teradal
* DATE			: 
* NAME			: Java_LIPIUIController_InitializeLipiEngine
* DESCRIPTION	: to  recognize the stroke drawn by the user
* ARGUMENTS		: jobject inkData :stroke data to be recognized
* RETURNS		: array of class ids along with the confidence
*
*************************************************************************************/
JNIEXPORT jobjectArray JNICALL Java_LIPIUIController_RecognizeJNI
  (JNIEnv *, jobject, jobject);

/*
 * Class:     LIPIUIController
 * Method:    TrainJNI
 * Signature: ()V
 */
/**********************************************************************************
* AUTHOR		: Roopa S Teradal
* DATE			: 
* NAME			: Java_LIPIUIController_InitializeLipiEngine
* DESCRIPTION	: LIPIJNIInterface calls the method of LIPITK (UnLoadModelData)
				  LIPIJNIInterface calls the method of LIPITK (Train)
				  LIPIJNIInterface calls the method of LIPITK (LoadModelData)
* ARGUMENTS		: 
* RETURNS		: void
*
*************************************************************************************/
JNIEXPORT void JNICALL Java_LIPIUIController_TrainJNI
  (JNIEnv *, jobject);

/*
 * Class:     LIPIUIController
 * Method:    CloseProjectJNI
 * Signature: (Ljava/lang/String;)V
 */
/**********************************************************************************
* AUTHOR		: Roopa S Teradal
* DATE			: 
* NAME			: Java_LIPIUIController_InitializeLipiEngine
* DESCRIPTION	: UnLoads lipiengine.dll from memory
				  Unloads the LIPIJNIInterface dll from memory
* ARGUMENTS		: 
* RETURNS		: void
*
*************************************************************************************/
JNIEXPORT void JNICALL Java_LIPIUIController_CloseProjectJNI
  (JNIEnv *, jobject);


/*
 * Class:     LIPIUIController
 * Method:    CloseProjectJNI
 * Signature: (Ljava/lang/String;)V
 */
/**********************************************************************************
* AUTHOR		: Roopa S Teradal
* DATE			: 
* NAME			: Java_LIPIUIController_InitializeLipiEngine
* DESCRIPTION	: UnLoads lipiengine.dll from memory
				  Unloads the LIPIJNIInterface dll from memory
* ARGUMENTS		: 
* RETURNS		: void
*
*************************************************************************************/
JNIEXPORT void JNICALL Java_LIPIUIController_ExitJNI
  (JNIEnv *, jobject);


#ifdef __cplusplus
}
#endif
#endif