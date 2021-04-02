// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//! \file fbximporter.h
#ifndef _FBXSDK_FILEIO_IMPORTER_H_
#define _FBXSDK_FILEIO_IMPORTER_H_

#include <fbxsdk/fbxsdk_def.h>

#include <fbxsdk/core/fbxsystemunit.h>
#include <fbxsdk/core/base/fbxtime.h>
#include <fbxsdk/fileio/fbxiobase.h>
#include <fbxsdk/fileio/fbxprogress.h>
#include <fbxsdk/fileio/fbxiosettings.h>
#include <fbxsdk/fileio/fbxstatistics.h>
#include <fbxsdk/scene/fbxaxissystem.h>
#include <fbxsdk/core/fbxclassid.h>

#include <fbxsdk/fbxsdk_nsbegin.h>

class FbxIO;
class FbxIOFileHeaderInfo;
class FbxDocumentInfo;
class FbxTakeInfo;
class FbxReader;
class FbxThread;
class FbxEmbeddedFileCallback;

struct FbxImportThreadArg;

/**
 * 
 */
class SCANPLUG_API MyClass
{
public:
	MyClass();
	~MyClass();
};


#include <fbxsdk/fbxsdk_def.h>

#include <fbxsdk/core/fbxpropertytypes.h>
#include <fbxsdk/core/fbxpropertyhandle.h>

#include <fbxsdk/fbxsdk_nsbegin.h>

class FBXSDK_DLL FbxDataType
{
public:
	static FbxDataType Create(const char* pName, const EFbxType pType);
	static FbxDataType Create(const char* pName, const FbxDataType& pDataType);

	/**
	  *\name Constructor and Destructor.
	  */
	  //@{
		  //! Constructor.
	FbxDataType();

	/** Copy constructor.
	  * \param pDataType Another FbxDataType object copied to this one.
	  */
	FbxDataType(const FbxDataType& pDataType);

	//! Destroy this datatype.
	void Destroy();

	/** Constructor.
	  * \param pTypeInfoHandle Type information handle
	  */
	FbxDataType(const FbxPropertyHandle& pTypeInfoHandle);

	//! Destructor.
	~FbxDataType();
	//@}

	/** Assignment operator
	  * \param pDataType Datatype whose value is assigned to this datatype.
	  * \return This datatype
	  */
	inline FbxDataType& operator=(const FbxDataType& pDataType) { mTypeInfoHandle = pDataType.mTypeInfoHandle; return *this; }

	/**
	  * \name boolean operation
	  */
	  //@{
		  /** Equality operator
			* \param pDataType Datatype to compare to.
			* \return \c true if equal,\c false otherwise.
			*/
	inline bool operator==(const FbxDataType& pDataType) const { return mTypeInfoHandle == pDataType.mTypeInfoHandle; }

	/** Non-equality operator
	  * \param pDataType Datatype to compare to.
	  * \return \c true if unequal,\c false otherwise.
	  */
	inline bool operator!=(const FbxDataType& pDataType) const { return mTypeInfoHandle != pDataType.mTypeInfoHandle; }
	//@}

	/** Test whether this datatype is a valid datatype.
	  * \return \c true if valid, \c false otherwise.
	  */
	inline bool Valid() const { return mTypeInfoHandle.Valid(); }

	/** Test if this datatype is the specified datatype.
	  * \param pDataType Datatype to compare to.
	  * \return \c true if this datatype is the specified datatype, \c false otherwise.
	  */
	inline bool Is(const FbxDataType& pDataType) const { return mTypeInfoHandle.Is(pDataType.mTypeInfoHandle); }

	/** Retrieve this data type.
	  * \return This data type.
	  */
	EFbxType GetType() const;

	/** Retrieve data type name.
	  * \return Data type name.
	  */
	const char* GetName() const;

	/** Retrieve the information handle of this data type.
	  * \return Information handle of this data type.
	  */
	inline const FbxPropertyHandle& GetTypeInfoHandle() const { return mTypeInfoHandle; }

private:
	FbxPropertyHandle mTypeInfoHandle;
	friend class FbxManager;
};

/** Retrieve data type from type enumeration index
  * \param pType The type enumeration index
  * \return The corresponding data type
  */
FBXSDK_DLL const FbxDataType& FbxGetDataTypeFromEnum(const EFbxType pType);

/** Retrieve data type name string used by I/O operations
  * \param pDataType The data type instance to retrieve its I/O name string
  * \return The data type name string
  * \remark This function is only used during I/O operations. It is not equal
  *         to the actual data type name.
  */
FBXSDK_DLL const char* FbxGetDataTypeNameForIO(const FbxDataType& pDataType);

//! \name Basic Data Types
//@{
extern FBXSDK_DLL FbxDataType FbxUndefinedDT;
extern FBXSDK_DLL FbxDataType FbxBoolDT;
extern FBXSDK_DLL FbxDataType FbxCharDT;
extern FBXSDK_DLL FbxDataType FbxUCharDT;
extern FBXSDK_DLL FbxDataType FbxShortDT;
extern FBXSDK_DLL FbxDataType FbxUShortDT;
extern FBXSDK_DLL FbxDataType FbxIntDT;
extern FBXSDK_DLL FbxDataType FbxUIntDT;
extern FBXSDK_DLL FbxDataType FbxLongLongDT;
extern FBXSDK_DLL FbxDataType FbxULongLongDT;
extern FBXSDK_DLL FbxDataType FbxFloatDT;
extern FBXSDK_DLL FbxDataType FbxHalfFloatDT;
extern FBXSDK_DLL FbxDataType FbxDoubleDT;
extern FBXSDK_DLL FbxDataType FbxDouble2DT;
extern FBXSDK_DLL FbxDataType FbxDouble3DT;
extern FBXSDK_DLL FbxDataType FbxDouble4DT;
extern FBXSDK_DLL FbxDataType FbxDouble4x4DT;
extern FBXSDK_DLL FbxDataType FbxEnumDT;
extern FBXSDK_DLL FbxDataType FbxStringDT;
extern FBXSDK_DLL FbxDataType FbxTimeDT;
extern FBXSDK_DLL FbxDataType FbxReferenceDT;
extern FBXSDK_DLL FbxDataType FbxBlobDT;
extern FBXSDK_DLL FbxDataType FbxDistanceDT;
extern FBXSDK_DLL FbxDataType FbxDateTimeDT;
//@}

//! \name Extended Data Types
//@{
extern FBXSDK_DLL FbxDataType FbxColor3DT;
extern FBXSDK_DLL FbxDataType FbxColor4DT;
extern FBXSDK_DLL FbxDataType FbxCompoundDT;
extern FBXSDK_DLL FbxDataType FbxReferenceObjectDT;
extern FBXSDK_DLL FbxDataType FbxReferencePropertyDT;
extern FBXSDK_DLL FbxDataType FbxVisibilityDT;
extern FBXSDK_DLL FbxDataType FbxVisibilityInheritanceDT;
extern FBXSDK_DLL FbxDataType FbxUrlDT;
extern FBXSDK_DLL FbxDataType FbxXRefUrlDT;
//@}

//! \name Transform Data Types
//@{
extern FBXSDK_DLL FbxDataType FbxTranslationDT;
extern FBXSDK_DLL FbxDataType FbxRotationDT;
extern FBXSDK_DLL FbxDataType FbxScalingDT;
extern FBXSDK_DLL FbxDataType FbxQuaternionDT;
extern FBXSDK_DLL FbxDataType FbxLocalTranslationDT;
extern FBXSDK_DLL FbxDataType FbxLocalRotationDT;
extern FBXSDK_DLL FbxDataType FbxLocalScalingDT;
extern FBXSDK_DLL FbxDataType FbxLocalQuaternionDT;
extern FBXSDK_DLL FbxDataType FbxTransformMatrixDT;
extern FBXSDK_DLL FbxDataType FbxTranslationMatrixDT;
extern FBXSDK_DLL FbxDataType FbxRotationMatrixDT;
extern FBXSDK_DLL FbxDataType FbxScalingMatrixDT;
//@}

//! \name Material Data Types
//@{
extern FBXSDK_DLL FbxDataType FbxMaterialEmissiveDT;
extern FBXSDK_DLL FbxDataType FbxMaterialEmissiveFactorDT;
extern FBXSDK_DLL FbxDataType FbxMaterialAmbientDT;
extern FBXSDK_DLL FbxDataType FbxMaterialAmbientFactorDT;
extern FBXSDK_DLL FbxDataType FbxMaterialDiffuseDT;
extern FBXSDK_DLL FbxDataType FbxMaterialDiffuseFactorDT;
extern FBXSDK_DLL FbxDataType FbxMaterialBumpDT;
extern FBXSDK_DLL FbxDataType FbxMaterialNormalMapDT;
extern FBXSDK_DLL FbxDataType FbxMaterialTransparentColorDT;
extern FBXSDK_DLL FbxDataType FbxMaterialTransparencyFactorDT;
extern FBXSDK_DLL FbxDataType FbxMaterialSpecularDT;
extern FBXSDK_DLL FbxDataType FbxMaterialSpecularFactorDT;
extern FBXSDK_DLL FbxDataType FbxMaterialShininessDT;
extern FBXSDK_DLL FbxDataType FbxMaterialReflectionDT;
extern FBXSDK_DLL FbxDataType FbxMaterialReflectionFactorDT;
extern FBXSDK_DLL FbxDataType FbxMaterialDisplacementDT;
extern FBXSDK_DLL FbxDataType FbxMaterialVectorDisplacementDT;
extern FBXSDK_DLL FbxDataType FbxMaterialCommonFactorDT;
extern FBXSDK_DLL FbxDataType FbxMaterialCommonTextureDT;
//@}

//! \name Layer Element Data Types
//@{
extern FBXSDK_DLL FbxDataType FbxLayerElementUndefinedDT;
extern FBXSDK_DLL FbxDataType FbxLayerElementNormalDT;
extern FBXSDK_DLL FbxDataType FbxLayerElementBinormalDT;
extern FBXSDK_DLL FbxDataType FbxLayerElementTangentDT;
extern FBXSDK_DLL FbxDataType FbxLayerElementMaterialDT;
extern FBXSDK_DLL FbxDataType FbxLayerElementTextureDT;
extern FBXSDK_DLL FbxDataType FbxLayerElementPolygonGroupDT;
extern FBXSDK_DLL FbxDataType FbxLayerElementUVDT;
extern FBXSDK_DLL FbxDataType FbxLayerElementVertexColorDT;
extern FBXSDK_DLL FbxDataType FbxLayerElementSmoothingDT;
extern FBXSDK_DLL FbxDataType FbxLayerElementCreaseDT;
extern FBXSDK_DLL FbxDataType FbxLayerElementHoleDT;
extern FBXSDK_DLL FbxDataType FbxLayerElementUserDataDT;
extern FBXSDK_DLL FbxDataType FbxLayerElementVisibilityDT;
//@}

//! \name I/O Specialized Data Types
//@{
extern FBXSDK_DLL FbxDataType FbxAliasDT;
extern FBXSDK_DLL FbxDataType FbxPresetsDT;
extern FBXSDK_DLL FbxDataType FbxStatisticsDT;
extern FBXSDK_DLL FbxDataType FbxTextLineDT;
extern FBXSDK_DLL FbxDataType FbxUnitsDT;
extern FBXSDK_DLL FbxDataType FbxWarningDT;
extern FBXSDK_DLL FbxDataType FbxWebDT;
//@}

//! \name External Support Data Types
//@{
extern FBXSDK_DLL FbxDataType FbxActionDT;
extern FBXSDK_DLL FbxDataType FbxCameraIndexDT;
extern FBXSDK_DLL FbxDataType FbxCharPtrDT;
extern FBXSDK_DLL FbxDataType FbxConeAngleDT;
extern FBXSDK_DLL FbxDataType FbxEventDT;
extern FBXSDK_DLL FbxDataType FbxFieldOfViewDT;
extern FBXSDK_DLL FbxDataType FbxFieldOfViewXDT;
extern FBXSDK_DLL FbxDataType FbxFieldOfViewYDT;
extern FBXSDK_DLL FbxDataType FbxFogDT;
extern FBXSDK_DLL FbxDataType FbxHSBDT;
extern FBXSDK_DLL FbxDataType FbxIKReachTranslationDT;
extern FBXSDK_DLL FbxDataType FbxIKReachRotationDT;
extern FBXSDK_DLL FbxDataType FbxIntensityDT;
extern FBXSDK_DLL FbxDataType FbxLookAtDT;
extern FBXSDK_DLL FbxDataType FbxOcclusionDT;
extern FBXSDK_DLL FbxDataType FbxOpticalCenterXDT;
extern FBXSDK_DLL FbxDataType FbxOpticalCenterYDT;
extern FBXSDK_DLL FbxDataType FbxOrientationDT;
extern FBXSDK_DLL FbxDataType FbxRealDT;
extern FBXSDK_DLL FbxDataType FbxRollDT;
extern FBXSDK_DLL FbxDataType FbxScalingUVDT;
extern FBXSDK_DLL FbxDataType FbxShapeDT;
extern FBXSDK_DLL FbxDataType FbxStringListDT;
extern FBXSDK_DLL FbxDataType FbxTextureRotationDT;
extern FBXSDK_DLL FbxDataType FbxTimeCodeDT;
extern FBXSDK_DLL FbxDataType FbxTimeWarpDT;
extern FBXSDK_DLL FbxDataType FbxTranslationUVDT;
extern FBXSDK_DLL FbxDataType FbxWeightDT;
//@}



#include <fbxsdk/core/fbxconnectionpoint.h>
#include <fbxsdk/core/fbxpropertytypes.h>
#include <fbxsdk/core/fbxpropertydef.h>

#include <fbxsdk/fbxsdk_nsbegin.h>

class FbxPropertyPage;
class FbxPropertyHandle;
class FbxConnectionPointFilter;

//!	\brief Class to manage property handle.
class FBXSDK_DLL FbxPropertyHandle
{
public:
	/**
	* \name Constructor and Destructor
	*/
	//@{
		//! Create an instance
	static FbxPropertyHandle Create();

	/** Create an instance with given instance.
	* \param pInstanceOf The given instance. */
	static FbxPropertyHandle Create(const FbxPropertyHandle& pInstanceOf);

	/** Create an instance with given name and type.
	* \param pName Property name.
	* \param pType Property type. */
	static FbxPropertyHandle Create(const char* pName, EFbxType pType = eFbxUndefined);

	/** Create an instance with given name and type info.
	* \param pName
	* \param pTypeInfo */
	static FbxPropertyHandle Create(const char* pName, FbxPropertyHandle pTypeInfo);

	/** If this property is root property, delete the property page, otherwise delete the property.
	* \return  If succeed, return true. */
	bool Destroy();

	//! Default constructor. 
	FbxPropertyHandle();

	/** Copy constructor.
	* \param pAddress FbxPropertyHandle copied to this one. */
	FbxPropertyHandle(const FbxPropertyHandle& pAddress);

	//! Destructor
	~FbxPropertyHandle();

	/**  Character constructor.
	* \param pPage
	* \param pId */
	FbxPropertyHandle(FbxPropertyPage* pPage, FbxInt pId = FBXSDK_PROPERTY_ID_ROOT);
	//@}

	/**
	* \name Assignment and basic info
	*/
	//@{
		/** FbxPropertyHandle assignment operator.
		* \param pHandle FbxPropertyHandle assigned to this one. */
	FbxPropertyHandle& operator=(const FbxPropertyHandle& pHandle);

	/** Equality operator.
	* \param pHandle FbxPropertyHandle compared with this one.
	* \return \c True if equal, \c false otherwise. */
	bool operator==(const FbxPropertyHandle& pHandle) const;

	/** Inequality operator.
	* \param pHandle FbxPropertyHandle compared with this one.
	* \return \c True if unequal, \c false otherwise. */
	bool operator!=(const FbxPropertyHandle& pHandle) const;

	/** Lesser operator, used to sort property handle in map.
	* \param pHandle The property handle compared to this property handle.
	* \return \c true if less, \c false otherwise. */
	bool operator< (const FbxPropertyHandle& pHandle) const;

	/** Greater operator, used to sort property handle in map.
	* \param pProperty The property handle compared to this property handle.
	* \return \c true if greater, \c false otherwise. */
	bool operator> (const FbxPropertyHandle& pHandle) const;

	/** Compare type info together
	* \param pHandle FbxPropertyHandle compared with this one.
	* \return \c True if equal, \c false otherwise. */
	bool Is(const FbxPropertyHandle& pHandle) const;

	//! Judge validity
	bool Valid() const;

	//! Get the property name
	const char* GetName() const;

	//! Get the property label
	const char* GetLabel() const;

	/** Set a label to the property
	* \param pLabel The given label string
	* \return \c true if successful. */
	bool SetLabel(const char* pLabel);

	//! Get the property type
	EFbxType GetType() const;

	//! Get the property type info
	FbxPropertyHandle GetTypeInfo() const;

	//! Get the property attribute state
	FbxPropertyFlags::EFlags	GetFlags() const;

	/**	Gets the inheritance type for the given flag.
	* \param pFlags The flag to query
	* \param pCheckReferences Decide whether check instance. If it is true, check instance.
	* \return The inheritance type */
	FbxPropertyFlags::EInheritType GetFlagsInheritType(FbxPropertyFlags::EFlags pFlags, bool pCheckReferences) const;

	/**	According the given parameter Change the attributes of the property.
	* \param pFlags The given flags used as mask.
	* \param pValue If pValue is true, set mask with given flags, otherwise unset mask with given flags.
	* \return  If succeed, return true. */
	bool ModifyFlags(FbxPropertyFlags::EFlags pFlags, bool pValue);

	/**Sets the inheritance type for the given flag
	* \param pFlags The flag to set
	* \param pType The inheritance type to set
	* \return  If succeed, return true. */
	bool SetFlagsInheritType(FbxPropertyFlags::EFlags pFlags, FbxPropertyFlags::EInheritType pType);

	//! Get the property user data.
	void* GetUserData() const;

	/** Set user data to the property
	* \param pUserData The given user data
	* \return  If succeed, return true. */
	bool SetUserData(const void* pUserData);

	//! Get the property user tag
	int GetUserTag() const;

	/** Set user tag to the property
	* \param pUserData The given user tag
	* \return  If succeed, return true. */
	bool SetUserTag(int pUserData);
	//@}

	/**
	* \name Enum management
	*/
	//@{
		/** Add new value at the end of the enum list in the property.
		* \param pStringValue The given new value
		* \return  The index of the value. */
	int AddEnumValue(const char* pStringValue);

	/** Insert new value at the given index of the enum list in property.
	* \param pIndex The given index
	* \param pStringValue The given new value */
	void InsertEnumValue(int pIndex, const char* pStringValue);

	/** Get the enum count of enum list in property
	* \return The enum count of enum list in property */
	int GetEnumCount();

	/** Set value at the given index of the enum list in the property.
	* \param pIndex  The given index
	* \param pStringValue The given new value used to instead the old value. */
	void SetEnumValue(int pIndex, const char* pStringValue);

	/** Remove the value at the index of the enum list in the property.
	* \param pIndex The given index */
	void RemoveEnumValue(int pIndex);

	/** Get the value at the index of enum list in the property.
	* \param pIndex    The given index
	* \return The value at the given index */
	char* GetEnumValue(int pIndex);
	//@}

	/**
	* \name Child and Struct management
	*/
	//@{
		//! Create the map for find property in the property page
	void BeginCreateOrFindProperty();

	//! Clear the map which created for find property.
	void EndCreateOrFindProperty();

	/** Judge if the property is the root property.
	* \return Return true if this property is root property. */
	inline bool	IsRoot() const { return (mPage && mId == 0) ? true : false; }

	/** Judge if the property is the child property of the given parent property.
	* \param pParent The given parent property handle
	* \return Return true if this property is child of given property. */
	bool IsChildOf(const FbxPropertyHandle& pParent) const;

	/** Judge if the property is descendent property of the given property.
	* \param pParent The given parent property handle
	* \return Return true if this property is descendant of given property. */
	bool IsDescendentOf(const FbxPropertyHandle& pParent) const;

	/** Set parent property handle.No matter what enters,the result is always false.
	* \param pOther
	* \return False */
	bool SetParent(const FbxPropertyHandle& pOther);

	/** Add a property to the property page.
	* \param pName The name of property.
	* \param pTypeInfo The added property's type info.
	* \return The handle of the new added property */
	FbxPropertyHandle Add(const char* pName, const FbxPropertyHandle& pTypeInfo);

	/** Get parent property
	* \return If the parent property exists, return the property handle,otherwise return -1. */
	FbxPropertyHandle GetParent() const;

	/**  Get child property
	* \return  If the child property is exist, return the property handle,otherwise return -1. */
	FbxPropertyHandle GetChild() const;

	/**  Get sibling property
	* \return If the sibling property is exist, return the property handle,otherwise return -1. */
	FbxPropertyHandle GetSibling() const;

	/**  Get first descendent property
	* \return If the descendent property is exist, return the first descendent property handle,otherwise return -1. */
	FbxPropertyHandle GetFirstDescendent() const;

	/**  Get first descendent property which after the given property
	* \param pHandle The given property handle
	* \return If the descendent property can be found after the given property,
	* return the first found property handle,otherwise return -1. */
	FbxPropertyHandle GetNextDescendent(const FbxPropertyHandle& pHandle) const;

	/** Find the property with given name
	* \param pName The given property name
	* \param pCaseSensitive Decide if the given property name is case sensitive
	* \return  Return a property handle which be created with the found property. */
	FbxPropertyHandle Find(const char* pName, bool pCaseSensitive) const;

	/** Find the property with given name and type info.
	* \param pName The given property name
	* \param pTypeInfo The given property type info
	* \param pCaseSensitive Decide if the given property name is case sensitive
	* \return  Return a property handle which be created with the found property. */
	FbxPropertyHandle Find(const char* pName, const FbxPropertyHandle& pTypeInfo, bool pCaseSensitive) const;

	/** Separate the given name by  children separator string and then find the property.The step is
	*  strip the first part of the name and search, if the property can be found, strip the second part
	*  of the name and continue search, until no property be found,then return the last found property.
	* \param pName The given property name
	* \param pChildrenSeparator The given children separator string
	* \param pCaseSensitive Decide if the given property name is case sensitive
	* \return  Return a property handle which be created with the found property. */
	FbxPropertyHandle Find(const char* pName, const char* pChildrenSeparator, bool pCaseSensitive) const;

	/** Separate the given name by  children separator string and then find the property.The step is
	*  strip the first part of the name and search, if the property can be found, strip the second part
	*  of the name and continue search, until no property be found,then return the last found property.
	* \param pName The given property name
	* \param pChildrenSeparator The given children separator string
	* \param pTypeInfo The given property type info
	* \param pCaseSensitive Decide if the given property name is case sensitive
	* \return  Return a property handle which be created with the found property. */
	FbxPropertyHandle Find(const char* pName, const char* pChildrenSeparator, const FbxPropertyHandle& pTypeInfo, bool pCaseSensitive) const;
	//@}

	/**
	* \name Connection management
	*/
	//@{
		/** Connect source property.
		* \param pSrc    The given source property
		* \param pType    The given property type
		* \return If connect successfully, return true,otherwise, return false. */
	bool ConnectSrc(const FbxPropertyHandle& pSrc, const FbxConnection::EType pType = FbxConnection::eDefault);

	/** Get source properties' count.
	* \param pFilter    The filter used to get sub connection point. If it is not zero, return the source count of the sub connection point.
	* Otherwise, return the src count of this property.
	* \return The count of source properties */
	int GetSrcCount(FbxConnectionPointFilter* pFilter = 0) const;

	/** Get source property with the given index.
	* \param pFilter    The filter used to get sub connection point. If it is not zero, return the source property of the sub connection point.
	* Otherwise, return the source property of this property.
	* \param pIndex    The given index
	* \return The source property handle. */
	FbxPropertyHandle GetSrc(FbxConnectionPointFilter* pFilter = 0, int pIndex = 0) const;

	/** Disconnect source property.
	* \param pSrc    The given source property
	* \return If disconnect successfully, return true, otherwise return false. */
	bool DisconnectSrc(const FbxPropertyHandle& pSrc);

	/** Judge if it is connected with the given source property.
	* \param pSrc    The given source property
	* \return If it is connected, return true, otherwise return false. */
	bool IsConnectedSrc(const FbxPropertyHandle& pSrc);

	/** Connect destination property.
	* \param pDst    The given destination property
	* \param pType    The given property type
	* \return If connect successfully, return true,otherwise, return false. */
	bool ConnectDst(const FbxPropertyHandle& pDst, const FbxConnection::EType pType = FbxConnection::eDefault);

	/** Get destination properties' count.
	* \param pFilter    The filter used to get sub connection point.If it is not zero,return the destination count of the sub connection point.
	* Otherwise, return the destination count of this property.
	* \return The count of destination properties */
	int GetDstCount(FbxConnectionPointFilter* pFilter = 0) const;

	/** Get destination property with the given index.
	* \param pFilter    The filter used to get sub connection point.If it is not zero,return the destination property of the sub connection point.
	* Otherwise, return the destination property of this property.
	* \param pIndex    The given index
	* \return The destination property handle. */
	FbxPropertyHandle GetDst(FbxConnectionPointFilter* pFilter = 0, int pIndex = 0) const;

	/** Disconnect destination property.
	* \param pDst    The given destination property
	* \return If disconnect successfully, return true,otherwise, return false. */
	bool DisconnectDst(const FbxPropertyHandle& pDst);

	/** Judge if it is connected with the given destination property.
	* \param pDst    The given destination property
	* \return If it is connected, return true,otherwise, return false. */
	bool IsConnectedDst(const FbxPropertyHandle& pDst);

	//! Clear connect cache
	void ClearConnectCache();

	//! Clear all connect without sending any notification (Internal use ONLY)
	void WipeAllConnections();
	//@}

	/** \name Limits Functions
	* Minimum and maximum value limits can be associated with properties, but FBX
	* will not verify that these limits are respected. FBX however will store and
	* retrieve limits from files, and will assure that they are persistent in memory
	* while the property handle object exists.
	*
	* Soft minimums and maximums values are specifying a second set of limits that can be
	* used for UI objects such as sliders. FBX will handle them the same way it does
	* with the normal limits. */
	//@{
		/** Judge if this property has a minimum value.
		* \return If the minimum value exist, return true,otherwise, return false. */
	bool HasMin() const;

	/** Get the minimum value and value type of this property.
	* \param pValue    The minimum value of this property.
	* \param pValueType The value type of this property.
	* \return If the minimum value exist, return true,otherwise, return false. */
	bool GetMin(void* pValue, EFbxType pValueType) const;

	/** Set the minimum value and value type for this property.
	* \param pValue    The given minimum value .
	* \param pValueType The given value type .
	* \return If it be set successfully, return true,otherwise, return false. */
	bool SetMin(const void* pValue, EFbxType pValueType);

	/** According the given value and its value type, set the minimum value and value type for this property.
	* \param pValue    The given value .
	* \return If it be set successfully, return true,otherwise, return false.
	*/
	template <class T> inline bool SetMin(const T& pValue) { return SetMin(&pValue, FbxTypeOf(pValue)); }

	/** Get the minimum value of this property.
	* \param pFBX_TYPE    Not used in this function. This is a dummy argument for
	*                     the correct instantiation of the templated function.
	* \return The minimum value of this property */
	template <class T> inline T GetMin(const T* pFBX_TYPE) const { T lValue; GetMin(&lValue, FbxTypeOf(lValue)); return lValue; }

	/** Judge if this property has soft minimum value.
	* \return If the soft minimum value exist, return true,otherwise, return false. */
	bool HasSoftMin() const;

	/** Get the soft minimum value and value type of this property.
	* \param pValue    The soft minimum value of this property.
	* \param pValueType The value type of this property.
	* \return If the soft minimum value exist, return true,otherwise, return false. */
	bool GetSoftMin(void* pValue, EFbxType pValueType) const;

	/** Set the soft minimum value and value type for this property.
	* \param pValue    The given soft minimum value .
	* \param pValueType The given value type .
	* \return If it be set successfully, return true,otherwise, return false. */
	bool SetSoftMin(const void* pValue, EFbxType pValueType);

	/** According the given value and its value type, set the soft minimum value and value type for this property.
	* \param pValue    The given value .
	* \return If it be set successfully, return true,otherwise, return false. */
	template <class T> inline bool SetSoftMin(const T& pValue) { return SetSoftMin(&pValue, FbxTypeOf(pValue)); }

	/** Get the soft minimum value of this property.
	* \param pFBX_TYPE    Not used in this function. This is a dummy argument for
	*                     the correct instantiation of the templated function.
	* \return The soft minimum value of this property */
	template <class T> inline T GetSoftMin(const T* pFBX_TYPE) const { T lValue; GetSoftMin(&lValue, FbxTypeOf(lValue)); return lValue; }

	/** Judge if this property has maximum value.
	* \return If the maximum value exist, return true,otherwise, return false. */
	bool HasMax() const;

	/** Get the maximum value and value type of this property.
	* \param pValue    The maximum value of this property.
	* \param pValueType The value type of this property.
	* \return If the maximum value exist, return true,otherwise, return false. */
	bool GetMax(void* pValue, EFbxType pValueType) const;

	/** Set the maximum value and value type for this property.
	* \param pValue    The given maximum value .
	* \param pValueType The given value type .
	* \return If it be set successfully, return true,otherwise, return false. */
	bool SetMax(const void* pValue, EFbxType pValueType);

	/** According the given value and its value type, set the maximum value and value type for this property.
	* \param pValue    The given value .
	* \return If it be set successfully, return true,otherwise, return false. */
	template <class T> inline bool SetMax(const T& pValue) { return SetMax(&pValue, FbxTypeOf(pValue)); }

	/** Get the maximum value of this property.
	* \param pFBX_TYPE    Not used in this function. This is a dummy argument for
	*                     the correct instantiation of the templated function.
	* \return The maximum value of this property */
	template <class T> inline T GetMax(const T* pFBX_TYPE) const { T lValue; GetMax(&lValue, FbxTypeOf(lValue)); return lValue; }

	/** Judge if this property has soft maximum value.
	* \return If the soft maximum value exist, return true,otherwise, return false. */
	bool HasSoftMax() const;

	/** Get the soft maximum value and value type of this property.
	* \param pValue    The soft maximum value of this property.
	* \param pValueType The value type of this property.
	* \return If the soft maximum value exist, return true,otherwise, return false. */
	bool GetSoftMax(void* pValue, EFbxType pValueType) const;

	/** Set the soft maximum value and value type for this property.
	* \param pValue    The given soft maximum value .
	* \param pValueType The given value type .
	* \return If it be set successfully, return true,otherwise, return false. */
	bool SetSoftMax(const void* pValue, EFbxType pValueType);

	/** According the given value and its value type, set the soft maximum value and value type for this property.
	* \param pValue    The given value .
	* \return If it be set successfully, return true,otherwise, return false. */
	template <class T> inline bool SetSoftMax(const T& pValue) { return SetSoftMax(&pValue, FbxTypeOf(pValue)); }

	/** Get the soft maximum value of this property.
	* \param pFBX_TYPE    Not used in this function. This is a dummy argument for
	*                     the correct instantiation of the templated function.
	* \return The soft maximum value of this property */
	template <class T> inline T GetSoftMax(const T* pFBX_TYPE) const { T lValue; GetSoftMax(&lValue, FbxTypeOf(lValue)); return lValue; }
	//@}

	/**
	* \name Value
	*/
	//@{
		/** Get value inherit type of this property.
		* \param pCheckReferences   If it is true,check instance of this property page,otherwise,only check this page.
		* \return The value inherit type of this property */
	FbxPropertyFlags::EInheritType GetValueInheritType(bool pCheckReferences) const;

	/** Set value inherit type for this property .
	* \param pType  The given value inherit type.
	* \return If set successfully, return true,otherwise, return false. */
	bool SetValueInheritType(FbxPropertyFlags::EInheritType pType);

	/** Get default value and value type of this property .
	* \param pValue  The gotten default value of this property.
	* \param pValueType The gotten default value type of this property.
	* \return If default value be gotten successfully, return true,otherwise, return false. */
	bool GetDefaultValue(void* pValue, EFbxType pValueType) const;

	/** Get value and value type of this property .
	* \param pValue  The gotten value of this property.
	* \param pValueType The gotten value type of this property.
	* \return If value be gotten successfully, return true,otherwise, return false. */
	bool Get(void* pValue, EFbxType pValueType) const;

	/** Set property value and value type for this property.
	* \param pValue    The given property value .
	* \param pValueType The given property value type
	* \param pCheckValueEquality If it is true, when the given value is equal with
	* the property value, the property value will not be set.
	* \return If the property value be set successfully, return true,otherwise, return false. */
	bool Set(const void* pValue, EFbxType pValueType, bool pCheckValueEquality);

	/** Set property value with the given value .
	* \param pValue  The given value .
	* \return If set successfully, return true,otherwise, return false. */
	template <class T> inline bool Set(const T& pValue) { return Set(&pValue, FbxTypeOf(pValue)); }

	/** get property value.
	* \param pFBX_TYPE  Not be used.
	* \return The gotten property value. */
	template <class T> inline T Get(const T* pFBX_TYPE) const { T lValue; Get(&lValue, FbxTypeOf(lValue)); return lValue; }
	//@}

	/**
	* \name Page settings
	*/
	//@{
		/** Set the property page data pointer.
		* \param pData  The given page data pointer. */
	void SetPageDataPtr(void* pData);

	/** Get property page data pointer.
	* \return The gotten property page data pointer. */
	void* GetPageDataPtr() const;
	//@}

	/**
	* \name Page Internal Entry Management
	*/
	//@{
		/** Push properties to parent instance.
		* \return If push successful return true,otherwise,return false. */
	bool PushPropertiesToParentInstance();
	//@}

	/**
	* \name Reference Management
	*/
	//@{
		/** Judge if this property page is a instance of other page.
		* \return If this property page is a instance of other page, return true,otherwise,return false. */
	bool IsAReferenceTo(void) const;

	/** Get the property page which this property page make reference to
	* \return The property page which this property page make reference to */
	void* GetReferenceTo(void) const;

	/** Judge if this property page is referenced by other pages.
	* \return If this property page is referenced by other pages, return true,otherwise,return false. */
	bool IsReferencedBy(void) const;

	/** Get the count of property pages which make reference to this property page.
	* \return The count of property pages which make reference to this property page. */
	int GetReferencedByCount(void) const;

	/** According the given index,get the property page which make reference to this property page.
	* \param pIndex The given index
	* \return The pointer to the property page which reference to this property page and be found by index. */
	void* GetReferencedBy(int pIndex) const;
	//@}

private:
	FbxPropertyPage* mPage;
	FbxInt				mId;
};

//! The function pointer type for object constructor functions.
typedef FbxObject* (*FbxObjectCreateProc)(FbxManager& pManager, const char* pName, const FbxObject* pFrom);

/** Internal class used to differentiate objects during run-time. Essentially, each class has an unique ClassId, that the
* system can request in order to test if the class match the description. This class implement the necessary tools to be able
* to perform hierarchic class testing. This means that a class B that inherits from the class A will answer yes to a "Is A"
* query of type A or B, but will answer no to a class C that can still inherit from A. All class must inherit from FbxObject
* before they can have their own ClassId. When using the standard macros to create new types of objects in the FBX SDK, a
* static ClassId will automatically be generated for that new class.
*
* When objects are exported to an FBX file, their class type is maintained using 3 sort of strings. They are the Object Type
* string, the Object Sub Type string and the Object Type Prefix. There is no good or bad way to choose the value of these
* identifiers, but it is preferable to use meaningful values to keep the ASCII version of FBX readable and easy to understand.
* \see FbxObject */
class FBXSDK_DLL FbxClassId
{
public:
	//! Constructor.
	FbxClassId();

	/** Advanced constructor were we can specify the general parameters for this ClassId.
	* \param pClassName The name of the class represented.
	* \param pParentClassId The parent ClassId of this class.
	* \param pConstructor A function pointer to a construction method for this ClassId.
	* \param pFBXType The FBX file Object Type string associated to this class.
	* \param pFBXSubType The FBX file Object Sub Type string associated to this class. */
	FbxClassId(const char* pClassName, const FbxClassId& pParentClassId, FbxObjectCreateProc pConstructor = 0, const char* pFBXType = NULL, const char* pFBXSubType = NULL);

	//! Destructor.
	void Destroy();

	/** Retrieve the class name.
	* \return The class identification string name. */
	const char* GetName() const;

	/** Retrieve the parent ClassId.
	* \return The parent ClassId. */
	FbxClassId GetParent() const;

	/** Create an instance of this class.
	* \param pManager The FBX SDK Manager to be used to instantiate this object. This allow the object to use the same memory manager as the provided manager.
	* \param pName The name to assign to this new object instance.
	* \param pFrom An object to clone if it matches the same ClassId. This is an optional parameter.
	* \return The newly created instance of this class. */
	FbxObject* Create(FbxManager& pManager, const char* pName, const FbxObject* pFrom);

	/** Override the function pointer method to construct this object.
	* \param pConstructor A newly defined function pointer to a construction method to replace the existing one.
	* \return True if the operation was successful. */
	bool Override(FbxObjectCreateProc pConstructor);

	/** Test if this class is a hierarchical children of the specified class type. This is the standard method to differentiate object classes.
	* \param pId The class type to test against self.
	* \return True if the object is a hierarchical children of the type specified.
	* \remark This function will perform a complete search until it reaches the top level class, but it will stop as soon as one ClassId matches the test. */
	bool Is(const FbxClassId& pId) const;

	/** Equivalence operator.
	* \param pClassId The class type to test against self.
	* \return \c true if the ClassId is exactly the same, \c false otherwise.
	* \remark This function only perform direct equality test, and doesn't test hierarchic children. */
	bool operator==(const FbxClassId& pClassId) const;

	/** Inequivalence operator.
	* \param pClassId The class type to test against self.
	* \return \c true if the ClassId is not the same, \c false otherwise.
	* \remark This function only perform direct inequality test, and doesn't test hierarchic children. */
	bool operator!=(const FbxClassId& pClassId) const;

	/** Retrieve the FBX file Object Type string associated to this class.
	* \param pAskParent If \c true, retrieve the parent ClassId, but only if self ClassId is not valid.
	* \return The FBX file Object Type string associated to this class. */
	const char* GetFbxFileTypeName(bool pAskParent = false) const;

	/** Retrieve the FBX file Object Sub Type string associated to this class.
	* \return The FBX file Object Sub Type string associated to this class. */
	const char* GetFbxFileSubTypeName() const;

	/** Find out if self ClassId is valid or not.
	* \return \c true if self ClassId is valid, \c false otherwise. */
	inline bool IsValid() const { return mClassInfo ? true : false; }

	/** Set the Object Type Prefix string associated to this class. This will change the "ObjectTypePrefix::" found in front
	* of object name in the FBX file. This is useful to differentiate objects by their name without using the Object Type or
	* Sub Type strings in the file.
	* \param pObjectTypePrefix The Object Type prefix string. */
	void SetObjectTypePrefix(const char* pObjectTypePrefix);

	/** Retrieve the Object Type Prefix string associated to this class.
	* \return The Object Type Prefix string. */
	const char* GetObjectTypePrefix();

	/** Retrieve the root property handle of this class. This is useful to access the default property hierarchy for this
	* class. This allow users to retrieve information such as the default value for all properties of this class.
	* \return The root property handle for this class. */
	FbxPropertyHandle* GetRootClassDefaultPropertyHandle();

	/** Increase the instance reference count for this class type.
	* \return the new count of reference to this class after increment. */
	int ClassInstanceIncRef();

	/** Decrease the instance reference count for this class type.
	* \return the new count of reference to this class after decrement. */
	int ClassInstanceDecRef();

	/** Retrieve the instance reference count for this class type.
	* \return The reference count of this class type. */
	int GetInstanceRef();

	/*****************************************************************************************************************************
	** WARNING! Anything beyond these lines is for internal use, may not be documented and is subject to change without notice! **
	*****************************************************************************************************************************/
#ifndef DOXYGEN_SHOULD_SKIP_THIS
	inline FbxClassIdInfo* GetClassIdInfo() { return mClassInfo; }
	inline const FbxClassIdInfo* GetClassIdInfo() const { return mClassInfo; }

private:
	FbxClassId(FbxClassIdInfo* mClassInfo);

	bool SetFbxFileTypeName(const char* pName);
	bool SetFbxFileSubTypeName(const char* pName);

	FbxClassIdInfo* mClassInfo;

	friend class FbxManager;
#endif /* !DOXYGEN_SHOULD_SKIP_THIS *****************************************************************************************/
};

//! Functor to compare FbxClassId
struct FbxClassIdCompare
{
	inline int operator()(const FbxClassId& pKeyA, const FbxClassId& pKeyB) const
	{
		const FbxClassIdInfo* lKeyA = pKeyA.GetClassIdInfo();
		const FbxClassIdInfo* lKeyB = pKeyB.GetClassIdInfo();
		return lKeyA < lKeyB ? -1 : (lKeyA > lKeyB ? 1 : 0);
	}
};



//! \file fbxmanager.h
#ifndef _FBXSDK_CORE_MANAGER_H_
#define _FBXSDK_CORE_MANAGER_H_

#include <fbxsdk/fbxsdk_def.h>

#include <fbxsdk/core/fbxobject.h>

#include <fbxsdk/fbxsdk_nsbegin.h>

class FbxIOSettings;
class FbxIOPluginRegistry;
class FbxAnimEvaluator;
class FbxSceneReference;
class FbxUserNotification;
class FbxMessageEmitter;
class FbxLocalizationManager;
class FbxXRefManager;
class FbxManager_internal;

#ifndef FBXSDK_ENV_WINSTORE
class FbxPlugin;
#endif

/** SDK object manager.
  *   The SDK manager is in charge of:
  *     \li scene element allocation, for example, FbxScene::Create(pSdkManager, "").
  *     \li scene element deallocation, call FbxManager::Destroy() to deallocates all object created by the SDK manager.
  *     \li scene element search and access, please see \ref GlobalObjectManagement section.
  *
  * It is possible to override memory allocation functions throughout the FBX SDK by
  * providing system memory allocation functions using the handler set functions below.
  * It must be done before the first FbxManager creation.
  *
  *	FbxSetMallocHandler();
  * FbxSetCallocHandler();
  * FbxSetReallocHandler();
  * FbxSetFreeHandler();
  *
  * Upon destruction, all objects allocated by the SDK manager and not explicitly destroyed are destroyed as well.
  * A derived class can be defined to allocate and deallocate specialized scene elements.
  * \remarks You could create more than one SDK manager. However, it's better to NOT share the same object among different managers.
  * \nosubgrouping
  */
class FBXSDK_DLL FbxManager
{
public:
	/**
	  * \name FBX SDK Manager Creation/Destruction
	  */
	  //@{
		  /** SDK manager allocation method.
			* \return A pointer to the SDK manager or \c NULL if this is an
			* evaluation copy of the FBX SDK and it is expired.
			*/
	static FbxManager* Create();

	/** Destructor.
	  * Deallocates all object previously created by the SDK manager.
	  */
	virtual void Destroy();
	//@}

	/**
	  * \name Versions Queries
	  */
	  //@{
		  /** Get FBX SDK version string.
			* \param pFull	If true, the complete version string including revision number and release date will be returned,
			*					otherwise only the version numbering is returned.
			*/
	static const char* GetVersion(bool pFull = true);

	/** Get the current default FBX file format version number for this version of the FBX SDK.
	  * \param pMajor        Version major number.
	  * \param pMinor        Version minor number.
	  * \param pRevision     Version revision number.
	  */
	static void GetFileFormatVersion(int& pMajor, int& pMinor, int& pRevision);
	//@}


	/**
	  * \name Object Registration, Definition and Management
	  */
	  //@{
		  /** Class registration.
			* \param pName				The class name. For example, "FbxMesh" for FbxMesh class.
			* \param T1					FBX type of the specified class.
			* \param T2					FBX type of parent class.
			* \param pFbxFileTypeName     The type name of the class in FBX file.
			* \param pFbxFileSubTypeName  The sub type name of the class in FBX file.
			* \return The class Id of the newly register class.
			* Such as:
			* \code RegisterFbxClass("FbxCamera", FBX_TYPE(FbxCamera), FBX_TYPE(FbxNodeAttribute)); \endcode
			*/
	template <typename T1, typename T2> inline FbxClassId RegisterFbxClass(const char* pName, const T1* /*T1*/, const T2* /*T2*/, const char* pFbxFileTypeName = 0, const char* pFbxFileSubTypeName = 0)
	{
		T1::ClassId = Internal_RegisterFbxClass(pName, T2::ClassId, (FbxObjectCreateProc)T1::Allocate, pFbxFileTypeName, pFbxFileSubTypeName);
		return T1::ClassId;
	}

	/** Runtime class registration.
	  * \param pName                    The class name. For example, "FbxUIWidgetBoolean".
	  * \param T						FBX type of parent class.
	  * \param pFbxFileTypeName         The type name of the class in FBX file.
	  * \param pFbxFileSubTypeName      The sub type name of the class in FBX file.
	  * \return The class Id of the newly register class.
	  * Such as:
	  * \code RegisterRuntimeFbxClass( "FbxUIWidgetBoolean", FBX_TYPE(FbxUIWidgetDefinition), NULL, "FbxUIWidgetBoolean"); \endcode
	  */
	template <typename T> inline FbxClassId RegisterRuntimeFbxClass(const char* pName, const T* /*T*/, const char* pFbxFileTypeName = 0, const char* pFbxFileSubTypeName = 0)
	{
		return Internal_RegisterFbxClass(pName, T::ClassId, (FbxObjectCreateProc)T::Allocate, pFbxFileTypeName, pFbxFileSubTypeName);
	}

	/** Runtime class unregistration.
	  * \param pName The class name.
	  */
	inline void UnregisterRuntimeFbxClass(const char* pName)
	{
		FbxClassId lClassId = FindClass(pName);
		if (!(lClassId == FbxClassId()))
		{
			Internal_UnregisterFbxClass(lClassId);
		}
	}

	/** Override class.
	  * \param pFBX_TYPE_Class      FBX type of class.
	  * \param pFBX_TYPE_OverridenClass FBX type of overridden class.
	  * \return The class Id
	  */
	template <typename T1, typename T2> inline FbxClassId OverrideFbxClass(const T1* pFBX_TYPE_Class, const T2* pFBX_TYPE_OverridenClass)
	{
		T1::ClassId = Internal_OverrideFbxClass(T2::ClassId, (FbxObjectCreateProc)T1::Allocate);
		return T1::ClassId;
	}

	/** Create a new object of the specified ClassId.
	  * \param pClassId		The ClassId of the object to be created.
	  * \param pName		The name given to the newly created object.
	  * \param pContainer	An optional parameter to specify which object will "contain" the new object. By contain, we mean
	  *						the new object will become a source to the container, connection-wise.
	  * \param pCloneFrom	A valid object pointer to use as the reference for cloning the object upon construction.
	  * \return				If not null, a new instance of the specified class.
	  * \remark				This function will return NULL if the ClassId used is invalid. New ClassId can be registered using
	  *						the function RegisterFbxClass().
	  */
	FbxObject* CreateNewObjectFromClassId(FbxClassId pClassId, const char* pName, FbxObject* pContainer = NULL, const FbxObject* pCloneFrom = NULL);

	/** Find class by the specified name.
	  * \param pClassName Class Name to find.
	  */
	FbxClassId FindClass(const char* pClassName) const;

	/** Find file class.
	  * \param pFbxFileTypeName     Specify the type name in FBX file to find.
	  * \param pFbxFileSubTypeName  Specify by The sub type name in FBX file to find.
	  */
	FbxClassId FindFbxFileClass(const char* pFbxFileTypeName, const char* pFbxFileSubTypeName) const;

	/** Class unregistration.
	  * \param pFBX_TYPE_Class  FBX type of unregistered class.
	  */
	template <typename T> inline void UnregisterFbxClass(const T*)
	{
		Internal_UnregisterFbxClass(T::ClassId);
		T::ClassId = FbxClassId();
	}
	//@}

	/**
	  * \name Data Type Management
	  */
	  //@{
		  /** Register a new data type to the manager
		   *  \param pName The type name.
		   *  \param pType The data type.
		   *  \return The newly created FbxDataType
		   */
	FbxDataType CreateDataType(const char* pName, const EFbxType pType);

	/** List the data types
	 *  \return the number of registered datatypes
	 */
	int GetDataTypeCount() const;

	/** Find a data types at pIndex.
	 *  \param pIndex The data type index.
	 *  \return the found datatype. return null if not found
	 */
	FbxDataType& GetDataType(const int pIndex) const;

	/** Find a data type from the type name.
	 *  \param pDataType The type name.
	 *  \return the found datatype. return null if not found
	 */
	FbxDataType& GetDataTypeFromName(const char* pDataType) const;
	//@}

	/**
	  * \name User Notification Object
	  */
	  //@{
		  /** Access to the unique UserNotification object.
			* \return The pointer to the user notification or \c NULL \c if the object
			* has not been allocated.
		  */
	FbxUserNotification* GetUserNotification() const;

	/** Set the user notification
	  * \param pUN
	  */
	void SetUserNotification(FbxUserNotification* pUN);
	//@}

	/**
	  * \name IOSettings Object
	  */
	  //@{
		  /** Access to a IOSettings object.
			* \return The pointer to IOSettings or \c NULL \c if the object
			* has not been allocated.
		  */
	virtual FbxIOSettings* GetIOSettings() const;

	/** Set the IOSettings pointer
	  * \param pIOSettings
	  */
	virtual void SetIOSettings(FbxIOSettings* pIOSettings);
	//@}


	/**
	  * \name Message Emitter (for Message Logging)
	  */
	  //@{
		  /** Access to the unique FbxMessageEmitter object.
			* \return The pointer to the message emitter.
		  */
	FbxMessageEmitter& GetMessageEmitter();
	/** Sets to the unique FbxMessageEmitter object.
	  * \param pMessageEmitter the emitter to use, passing NULL will reset to the default emitter.
	  * The object will be deleted when the SDK manager is destroyed, thus ownership is transfered.
	*/
	bool SetMessageEmitter(FbxMessageEmitter* pMessageEmitter);
	//@}


	/**
	  * \name Localization Hierarchy
	  */
	  //@{
		  /** Add a localization object to the known localization providers.
			* \param pLocManager the localization object to register.
		  */
	void AddLocalization(FbxLocalizationManager* pLocManager);

	/** Remove a localization object from the known localization providers.
	  * \param pLocManager the localization object to remove.
	*/
	void RemoveLocalization(FbxLocalizationManager* pLocManager);

	/** Select the current locale for localization.
	  * \param pLocale the locale name, for example "fr" or "en-US".
	*/
	bool SetLocale(const char* pLocale);

	/** Localization helper function. Calls each registered localization manager
	  * until one can localizes the text.
	  * \param pID the identifier for the text to localize.
	  * \param pDefault the default text. Uses pID if NULL.
	  * \return the potentially localized text. May return the parameter passed in.
	*/
	const char* Localize(const char* pID, const char* pDefault = NULL) const;
	//@}

	/**
	  * \name XRef Manager
	  */
	  //@{
		  /** Retrieve the manager responsible for managing object XRef resolution.
			* \return The XRef manager for this SDK manager.
			*/
	FbxXRefManager& GetXRefManager();
	//@}

	/**
	  * \name Library Management
	  */
	  //@{
		  /** Retrieve the main object Libraries
			* \return The Root library
			*/
	FbxLibrary* GetRootLibrary() const;
	FbxLibrary* GetSystemLibraries() const;
	FbxLibrary* GetUserLibraries() const;
	//@}

	/**
	  * \name Plug-in Registry Object
	  */
	  //@{
		  /** Access to the unique FbxIOPluginRegistry object.
			* \return The pointer to the user FbxIOPluginRegistry
		  */
	FbxIOPluginRegistry* GetIOPluginRegistry() const;
	//@}

	/**
	  * \name Fbx Generic Plugins Management
	  */
	  //@{
#ifndef FBXSDK_ENV_WINSTORE
	/** Load plug-ins directory
	  * \param pFilename The directory path.
	  * \param pExtensions The plug in extension.
	  * \return \c True
	  */
	bool LoadPluginsDirectory(const char* pFilename, const char* pExtensions = NULL);

	/** Load plug-in
	  * \param pFilename The file name
	  * \return \c True
	  */
	bool LoadPlugin(const char* pFilename);

	/** Unload all plug-ins
	*/
	bool UnloadPlugins();

	/** Emit plugins event.
	  * \param pEvent The event to be emitted.
	  */
	bool EmitPluginsEvent(const FbxEventBase& pEvent);

	//!Get plugins.
	FbxArray<const FbxPlugin*> GetPlugins() const;

	/** get plugins count
	  * \return The number of plugins.
	  */
	int GetPluginCount() const;

	/** Find plug in.
	  * \param pName The plug in name.
	  * \param pVersion The plug in version.
	  * \return The plugin, \c null if not found.
	  */
	FbxPlugin* FindPlugin(const char* pName, const char* pVersion) const;
#endif /* !FBXSDK_ENV_WINSTORE */
	//@}


	/**
	  * \name IO Settings
	  */
	  //@{
	  // Add IOSettings in hierarchy from different modules

		  /** Fill IO Settings for registered readers.
			* \param pIOS The properties hierarchies to fill.
			*/
	void FillIOSettingsForReadersRegistered(FbxIOSettings& pIOS);

	/** Fill IO Settings for registered writers.
	  * \param pIOS The properties hierarchies to fill.
	  */
	void FillIOSettingsForWritersRegistered(FbxIOSettings& pIOS);

	/** Fill common IO Settings
	  * \param pIOS The properties hierarchies to fill.
	  * \param pImport If \c true, import properties are set, otherwise export properties are set.
	  */
	void FillCommonIOSettings(FbxIOSettings& pIOS, bool pImport);
	//@}

	/**
	  * \name Global Object Management
	  */
	  //@{
		  /** Register object with the manager.
			* \internal
			* \param pObject The object to be registered.
			* \anchor GlobalObjectManagement
			*/
	void RegisterObject(FbxObject* pObject);

	/** Unregister object with the manager.
	  * \internal
	  * \param pObject The object to be unregistered.
	  */
	void UnregisterObject(FbxObject* pObject);

	/** Register a list of objects with the manager.
	  * \internal
	  * \param pArray The list of object to be registered.
	  */
	void RegisterObjects(const FbxArray<FbxObject*>& pArray);

	/** Unregister a list of objects with the manager.
	  * \internal
	  * \param pArray The list of object to be unregistered.
	  */
	void UnregisterObjects(const FbxArray<FbxObject*>& pArray);

	/** Increment the scene destroying counter.
	  * \remarks Call this function before the destroying list is changed.
	 */
	void IncreaseDestroyingSceneFlag();
	/** Shrink the object list and decrements the scene destroying counter.
	  * \remarks Call this function after the destroying is changed.
	  * Use IncreasDestroyingSceneFlag() and DecreaseDestroyingSceneFlag() in pairs.
	 */
	void DecreaseDestroyingSceneFlag();
	/**
	* \name Reference Management
	*/
	//@{
		/** Get number of references.
		* \return Number of references.
		*/
	int GetReferenceCount() const;

	/** Get reference at given index.
	* \param pIndex Position in the list of references.
	* \return Pointer to the reference or \c NULL if index is out of bounds.
	*/
	FbxSceneReference* GetReference(int pIndex) const;

	/** Add a reference.
	* \param pReference The reference to be added.
	* \return If the reference is correctly added to the scene, return \c true otherwise, if the reference is
	*  already there, returns \c false.
	*/
	int AddReference(FbxSceneReference* pReference);

	/** Remove the specified reference from reference list.
	* \param pReference The reference to be removed.
	* \return If the reference was successfully removed, return \c true otherwise, if the
	*  reference could not be found returns \c false.
	*/
	bool RemoveReference(FbxSceneReference* pReference);

	/** Clear the specified reference from the SDK manager.
	* \param pReference The reference to be removed.
	* \return If the reference was successfully cleared from the SDK manager, return \c true otherwise, if the
	*  reference could not be found returns \c false.
	*/
	bool ClearReference(FbxSceneReference* pReference);
	//@}

	/** Add a prefix to a name.
	  * \param pPrefix The prefix to be added to the \c pName. This
	  * string must contain the "::" characters in order to be considered
	  * as a prefix.
	  * \param pName The name to be prefix.
	  * \return The prefixed string
	  * \remarks If a prefix already exists, it is removed before
	  * adding \c pPrefix.
	  */
	static FbxString PrefixName(const char* pPrefix, const char* pName);

	/** Get the count of document available in this manager
	  * \return The count of document owned by this manager.
	  */
	int GetDocumentCount();

	/** Get the document at pIndex in the manager's list.
	  * \param pIndex The index of the document to retrieve.
	  * \return The document at the specified index. Will return NULL if index is invalid.
	  */
	FbxDocument* GetDocument(int pIndex);

	/*****************************************************************************************************************************
	** WARNING! Anything beyond these lines is for internal use, may not be documented and is subject to change without notice! **
	*****************************************************************************************************************************/
#ifndef DOXYGEN_SHOULD_SKIP_THIS
	static FbxManager* GetDefaultManager();
	void				CreateMissingBindPoses(FbxScene* pScene);
	int					GetBindPoseCount(FbxScene* pScene) const;
	int					GetFbxClassCount() const;
	FbxClassId			GetNextFbxClass(FbxClassId pClassId /* invalid id: first one */) const;

protected:
	FbxManager();
	virtual ~FbxManager();

	void Clear();
	void ClassInit();
	void ClassRelease();
	void DataTypeInit();
	void DataTypeRelease();

private:
	bool		CanAutoDestroySrcObject(FbxObject* pObject, FbxObject* pSrcObject, bool pRecursive) const;

	void		Create_Common_Import_IOSettings_Groups(FbxIOSettings& pIOS);
	void		Create_Common_Export_IOSettings_Groups(FbxIOSettings& pIOS);
	void		Add_Common_Import_IOSettings(FbxIOSettings& pIOS);
	void		Add_Common_Export_IOSettings(FbxIOSettings& pIOS);
	void		Add_Common_RW_Import_IOSettings(FbxIOSettings& pIOS);
	void		Add_Common_RW_Export_IOSettings(FbxIOSettings& pIOS);

	FbxClassId	Internal_RegisterFbxClass(const char* pClassName, FbxClassId pParentClassId, FbxObjectCreateProc = 0, const char* pFbxFileTypeName = 0, const char* pFbxFileSubTypeName = 0);
	bool		Internal_RegisterFbxClass(FbxClassId pClassId);
	FbxClassId	Internal_OverrideFbxClass(FbxClassId pClassId, FbxObjectCreateProc = 0);
	void		Internal_UnregisterFbxClass(FbxClassId pClassId);

	void		RemoveObjectsOfType(const FbxClassId& pClassId);

	FbxAnimEvaluator* GetDefaultAnimationEvaluator();

	FbxArray<FbxObject*>				mObjects;
	FbxArray<FbxDocument*>				mDocuments;

	FbxIOSettings* mIOSettings;
	FbxIOPluginRegistry* mRegistry;
	FbxUserNotification* mUserNotification;
	FbxMessageEmitter* mMessageEmitter;
	FbxArray<FbxLocalizationManager*>	mLocalizationManagerArray;
	FbxArray<FbxSceneReference*>		mSceneReferenceArray;
	FbxAnimEvaluator* mDefaultAnimationEvaluator;

	FbxArray<FbxObject*>				mDestroyingObjects;
	FbxArray<FbxDocument*>				mDestroyingDocuments;
	int									mIsDestroyingScene;

	FbxManager_internal* mInternal;
	static FbxManager* smDefaultManager;

	FBXSDK_FRIEND_NEW();
	friend class FbxObject;
	friend class FbxProperty;		//For GetDefaultAnimationEvaluator()
	friend class FbxNode;			//For GetDefaultAnimationEvaluator()
	friend class FbxScene;			//For GetDefaultAnimationEvaluator()
	friend class FbxAnimEvaluator;	//For GetDefaultAnimationEvaluator()
#endif /* !DOXYGEN_SHOULD_SKIP_THIS *****************************************************************************************/
};

#include <fbxsdk/fbxsdk_nsend.h>

#endif /* _FBXSDK_CORE_MANAGER_H_ */


