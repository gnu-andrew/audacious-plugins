#ifndef __VORBIS_H__
#define __VORBIS_H__

#include <vorbis/vorbisfile.h>

#include <audacious/plugin.h>

extern ov_callbacks vorbis_callbacks;

gboolean vorbis_update_song_tuple (const char * filename, VFSFile * fd, const Tuple * tuple);

#endif                          /* __VORBIS_H__ */
