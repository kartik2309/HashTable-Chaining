========================================================================
    CONSOLE APPLICATION : HashTable-Chaining Project Overview
========================================================================

AppWizard has created this HashTable-Chaining application for you.

This file contains a summary of what you will find in each of the files that
make up your HashTable-Chaining application.


HashTable-Chaining.vcxproj
    This is the main project file for VC++ projects generated using an Application Wizard.
    It contains information about the version of Visual C++ that generated the file, and
    information about the platforms, configurations, and project features selected with the
    Application Wizard.

HashTable-Chaining.vcxproj.filters
    This is the filters file for VC++ projects generated using an Application Wizard. 
    It contains information about the association between the files in your project 
    and the filters. This association is used in the IDE to show grouping of files with
    similar extensions under a specific node (for e.g. ".cpp" files are associated with the
    "Source Files" filter).

HashTable-Chaining.cpp
    This is the main application source file.

/////////////////////////////////////////////////////////////////////////////
Other standard files:

StdAfx.h, StdAfx.cpp
    These files are used to build a precompiled header (PCH) file
    named HashTable-Chaining.pch and a precompiled types file named StdAfx.obj.
Hash.h,Hash.cpp
    The Hash class and been defined and functions for Hashtable have been prototyped in the Hash.h file.
	The Hash functions have been defined from Hash class in Hash.h.
Associative.h
    Contains all the header files required for preparing HashTable.
HashObject.h
     Contains the Object definition that can be used in HashTable-Chaining.cpp to access the functions.

/////////////////////////////////////////////////////////////////////////////
Other notes:

AppWizard uses "TODO:" comments to indicate parts of the source code you
should add to or customize.

/////////////////////////////////////////////////////////////////////////////
Functions in the Hashtable:

AddItem(Name, Balance):Adds the Name and Balance to the Hashtable.
SearchName(Name):Searches the Hashtable for the name you give in.
DeleteName(Name):Deletes the Name and Balance associated with the Name,passed arguement.
ChangeDetails(Name, Balance):Changes the Balance associated with a particular Name.
PrintHashTable():Prints entire Hashtable.

To access the functions use the predefined object 'HashTable'.

//////////////////////////////////////////////////////////////////////////////

