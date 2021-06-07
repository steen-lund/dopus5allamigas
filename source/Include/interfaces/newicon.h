#ifndef NEWICON_INTERFACE_DEF_H
#define NEWICON_INTERFACE_DEF_H

/*
** This file was machine generated by idltool 53.5.
** Do not edit
*/

#ifndef EXEC_TYPES_H
	#include <exec/types.h>
#endif
#ifndef EXEC_EXEC_H
	#include <exec/exec.h>
#endif
#ifndef EXEC_INTERFACES_H
	#include <exec/interfaces.h>
#endif

#ifndef LIBRARIES_NEWICON_H
	#include <libraries/newicon.h>
#endif

#ifdef __cplusplus
	#ifdef __USE_AMIGAOS_NAMESPACE__
namespace AmigaOS {
	#endif
extern "C" {
#endif

struct NewIconIFace
{
	struct InterfaceData Data;

	uint32 APICALL (*Obtain)(struct NewIconIFace *Self);
	uint32 APICALL (*Release)(struct NewIconIFace *Self);
	void APICALL (*Expunge)(struct NewIconIFace *Self);
	struct Interface *APICALL (*Clone)(struct NewIconIFace *Self);
	struct NewDiskObject *APICALL (*GetNewDiskObject)(struct NewIconIFace *Self, UBYTE *name);
	BOOL APICALL (*PutNewDiskObject)(struct NewIconIFace *Self, UBYTE *name, struct NewDiskObject *newdiskobj);
	void APICALL (*FreeNewDiskObject)(struct NewIconIFace *Self, struct NewDiskObject *newdiskobj);
	void APICALL (*Reserved1)(struct NewIconIFace *Self);
	void APICALL (*Reserved2)(struct NewIconIFace *Self);
	void APICALL (*Reserved3)(struct NewIconIFace *Self);
	struct Image *APICALL (*RemapChunkyImage)(struct NewIconIFace *Self,
											  struct ChunkyImage *chunkyimage,
											  struct Screen *screen);
	VOID APICALL (*FreeRemappedImage)(struct NewIconIFace *Self, struct Image *image, struct Screen *screen);
	struct NewDiskObject *APICALL (*GetDefNewDiskObject)(struct NewIconIFace *Self, LONG def_type);
};

#ifdef __cplusplus
}
	#ifdef __USE_AMIGAOS_NAMESPACE__
}
	#endif
#endif

#endif /* NEWICON_INTERFACE_DEF_H */
