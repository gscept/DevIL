//-----------------------------------------------------------------------------
//
// ImageLib Sources
// Copyright (C) 2000-2002 by Denton Woods
// Last modified: 05/25/2001 <--Y2K Compliant! =]
//
// Filename: src-IL/include/il_stack.h
//
// Description: The main image stack
//
//-----------------------------------------------------------------------------

#ifndef IMAGESTACK_H
#define IMAGESTACK_H

#include "il_internal.h"


// Just a guess...seems large enough
#define I_STACK_INCREMENT 1024

typedef struct iFree
{
	ILuint	Name;
	void	*Next;
} iFree;


// Internal functions
ILboolean	iEnlargeStack(void);
void		iFreeMem(void);

// Globals for il_stack.c
thread_local ILuint		StackSize = 0;
thread_local ILuint		LastUsed = 0;
thread_local ILuint		CurName = 0;
thread_local ILimage	**ImageStack = NULL;
thread_local iFree		*FreeNames = NULL;
thread_local ILboolean	OnExit = IL_FALSE;
thread_local ILboolean	ParentImage = IL_TRUE;


#endif//IMAGESTACK_H
