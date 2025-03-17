#define WIN32_DYNAMIC_PROCS \
	WPROC("_AIL_3D_sample_volume@4", long __stdcall, AIL_3D_sample_volume, (H3DSAMPLE sample)) \
	WPROC("_AIL_set_3D_sample_volume@8", void __stdcall, AIL_set_3D_sample_volume, (H3DSAMPLE sample, float volume)) \
	WPROC("_AIL_end_3D_sample@4", void __stdcall, AIL_end_3D_sample, (H3DSAMPLE sample)) \
	WPROC("_AIL_resume_3D_sample@4", void __stdcall, AIL_resume_3D_sample, (H3DSAMPLE sample)) \
	WPROC("_AIL_stop_3D_sample@4", void __stdcall, AIL_stop_3D_sample, (H3DSAMPLE sample)) \
	WPROC("_AIL_start_3D_sample@4", void __stdcall, AIL_start_3D_sample, (H3DSAMPLE sample)) \
	WPROC("_AIL_3D_sample_loop_count@4", int __stdcall, AIL_3D_sample_loop_count, (H3DSAMPLE sample)) \
	WPROC("_AIL_set_3D_sample_offset@8", void __stdcall, AIL_set_3D_sample_offset, (H3DSAMPLE sample, int offset)) \
	WPROC("_AIL_3D_sample_length@4", int __stdcall, AIL_3D_sample_length, (H3DSAMPLE sample)) \
	WPROC("_AIL_3D_sample_offset@4", int __stdcall, AIL_3D_sample_offset, (H3DSAMPLE sample)) \
	WPROC("_AIL_3D_sample_playback_rate@4", int __stdcall, AIL_3D_sample_playback_rate, (H3DSAMPLE sample)) \
	WPROC("_AIL_set_3D_sample_playback_rate@8", void __stdcall, AIL_set_3D_sample_playback_rate, (H3DSAMPLE sample, int playback_rate)) \
	WPROC("_AIL_set_3D_sample_file@8", int __stdcall, AIL_set_3D_sample_file, (H3DSAMPLE sample, const void* file_image)) \
	WPROC("_AIL_set_sample_processor@12", HPROVIDER __stdcall, AIL_set_sample_processor, (HSAMPLE sample, SAMPLESTAGE pipeline_stage, HPROVIDER provider)) \
	WPROC("_AIL_set_filter_sample_preference@12", void __stdcall, AIL_set_filter_sample_preference, (HSAMPLE sample, const char* name, const void* val)) \
	WPROC("_AIL_release_sample_handle@4", void __stdcall, AIL_release_sample_handle, (HSAMPLE sample)) \
	WPROC("_AIL_close_3D_provider@4", void __stdcall, AIL_close_3D_provider, (HPROVIDER lib)) \
	WPROC("_AIL_set_preference@8", int __stdcall, AIL_set_preference, (unsigned int number, int value)) \
	WPROC("_AIL_waveOutOpen@16", int __stdcall, AIL_waveOutOpen, (HDIGDRIVER* driver, LPHWAVEOUT* waveout, int id, LPWAVEFORMAT format)) \
	WPROC("_AIL_waveOutClose@4", void __stdcall, AIL_waveOutClose, (HDIGDRIVER driver)) \
	WPROC("_AIL_set_3D_sample_loop_count@8", void __stdcall, AIL_set_3D_sample_loop_count, (H3DSAMPLE sample, int count)) \
	WPROC("_AIL_set_stream_playback_rate@8", void __stdcall, AIL_set_stream_playback_rate, (HSTREAM stream, int rate)) \
	WPROC("_AIL_stream_playback_rate@4", int __stdcall, AIL_stream_playback_rate, (HSTREAM stream)) \
	WPROC("_AIL_stream_ms_position@12", void __stdcall, AIL_stream_ms_position, (HSTREAM sample, S32* total_milliseconds, S32* current_milliseconds)) \
	WPROC("_AIL_set_stream_ms_position@8", void __stdcall, AIL_set_stream_ms_position, (HSTREAM stream, int pos)) \
	WPROC("_AIL_stream_loop_count@4", int __stdcall, AIL_stream_loop_count, (HSTREAM stream)) \
	WPROC("_AIL_set_stream_loop_block@12", void __stdcall, AIL_set_stream_loop_block, (HSTREAM stream, int loop_start, int loop_end)) \
	WPROC("_AIL_set_stream_loop_count@8", void __stdcall, AIL_set_stream_loop_count, (HSTREAM stream, int count)) \
	WPROC("_AIL_stream_volume@0", int __stdcall, AIL_stream_volume, (HSTREAM stream)) \
	WPROC("_AIL_set_stream_volume@0", void __stdcall, AIL_set_stream_volume, (HSTREAM stream, int volume)) \
	WPROC("_AIL_stream_pan@0", int __stdcall, AIL_stream_pan, (HSTREAM stream)) \
	WPROC("_AIL_set_stream_pan@0", void __stdcall, AIL_set_stream_pan, (HSTREAM stream, int pan)) \
	WPROC("_AIL_close_stream@4", void __stdcall, AIL_close_stream, (HSTREAM stream)) \
	WPROC("_AIL_pause_stream@8", void __stdcall, AIL_pause_stream, (HSTREAM stream, int onoff)) \
	WPROC("_AIL_register_stream_callback@8", AIL_stream_callback __stdcall, AIL_register_stream_callback, (HSTREAM stream, AIL_stream_callback callback)) \
	WPROC("_AIL_register_3D_EOS_callback@8", AIL_3dsample_callback __stdcall, AIL_register_3D_EOS_callback, (H3DSAMPLE sample, AIL_3dsample_callback EOS)) \
	WPROC("_AIL_register_EOS_callback@8", AIL_sample_callback __stdcall, AIL_register_EOS_callback, (HSAMPLE sample, AIL_sample_callback EOS)) \
	WPROC("_AIL_start_stream@4", void __stdcall, AIL_start_stream, (HSTREAM stream)) \
	WPROC("_AIL_open_stream_by_sample@0", HSTREAM __stdcall, AIL_open_stream_by_sample, (HDIGDRIVER driver, HSAMPLE sample, const char* file_name, int mem)) \
	WPROC("_AIL_set_sample_playback_rate@8", void __stdcall, AIL_set_sample_playback_rate, (HSAMPLE sample, int playback_rate)) \
	WPROC("_AIL_sample_playback_rate@4", int __stdcall, AIL_sample_playback_rate, (HSAMPLE sample)) \
	WPROC("_AIL_sample_ms_position@12", void __stdcall, AIL_sample_ms_position, (HSAMPLE sample, long* total_ms, long* current_ms)) \
	WPROC("_AIL_set_sample_ms_position@8", void __stdcall, AIL_set_sample_ms_position, (HSAMPLE sample, int pos)) \
	WPROC("_AIL_sample_loop_count@4", int __stdcall, AIL_sample_loop_count, (HSAMPLE sample)) \
	WPROC("_AIL_set_sample_loop_count@8", void __stdcall, AIL_set_sample_loop_count, (HSAMPLE sample, int count)) \
	WPROC("_AIL_sample_volume@0", int __stdcall, AIL_sample_volume, (HSAMPLE sample)) \
	WPROC("_AIL_set_sample_volume@0", void __stdcall, AIL_set_sample_volume, (HSAMPLE sample, int volume)) \
	WPROC("_AIL_sample_pan@0", int __stdcall, AIL_sample_pan, (HSAMPLE sample)) \
	WPROC("_AIL_set_sample_pan@0", void __stdcall, AIL_set_sample_pan, (HSAMPLE sample, int pan)) \
	WPROC("_AIL_end_sample@4", void __stdcall, AIL_end_sample, (HSAMPLE sample)) \
	WPROC("_AIL_resume_sample@4", void __stdcall, AIL_resume_sample, (HSAMPLE sample)) \
	WPROC("_AIL_stop_sample@4", void __stdcall, AIL_stop_sample, (HSAMPLE sample)) \
	WPROC("_AIL_start_sample@4", void __stdcall, AIL_start_sample, (HSAMPLE sample)) \
	WPROC("_AIL_init_sample@4", void __stdcall, AIL_init_sample, (HSAMPLE sample)) \
	WPROC("_AIL_set_named_sample_file@20", int __stdcall, AIL_set_named_sample_file, (HSAMPLE sample, const char* file_name, const void* file_image, int file_size, int block)) \
	WPROC("_AIL_set_3D_sample_effects_level@8", void __stdcall, AIL_set_3D_sample_effects_level, (H3DSAMPLE sample, float effect_level)) \
	WPROC("_AIL_set_3D_sample_distances@12", void __stdcall, AIL_set_3D_sample_distances, (H3DSAMPLE sample, float max_dist, float min_dist)) \
	WPROC("_AIL_set_3D_velocity_vector@16", void __stdcall, AIL_set_3D_velocity_vector, (H3DSAMPLE sample, float x, float y, float z)) \
	WPROC("_AIL_set_3D_position@16", void __stdcall, AIL_set_3D_position, (H3DPOBJECT obj, float X, float Y, float Z)) \
	WPROC("_AIL_set_3D_orientation@28", void __stdcall, AIL_set_3D_orientation, (H3DPOBJECT obj, float X_face, float Y_face, float Z_face, float X_up, float Y_up, float Z_up)) \
	WPROC("_AIL_WAV_info@8", int __stdcall, AIL_WAV_info, (const void* data, AILSOUNDINFO* info)) \
	WPROC("_AIL_stop_timer@4", void __stdcall, AIL_stop_timer, (HTIMER timer)) \
	WPROC("_AIL_release_timer_handle@4", void __stdcall, AIL_release_timer_handle, (HTIMER timer)) \
	WPROC("_AIL_shutdown@0", void __stdcall, AIL_shutdown, (void)) \
	WPROC("_AIL_enumerate_filters@12", int __stdcall, AIL_enumerate_filters, (HPROENUM* next, HPROVIDER* dest, char** name)) \
	WPROC("_AIL_set_file_callbacks@16", void __stdcall, AIL_set_file_callbacks, (AIL_file_open_callback opencb, AIL_file_close_callback closecb,AIL_file_seek_callback seekcb, AIL_file_read_callback readcb)) \
	WPROC("_AIL_release_3D_sample_handle@4", void __stdcall, AIL_release_3D_sample_handle, (H3DSAMPLE sample)) \
	WPROC("_AIL_allocate_3D_sample_handle@4", H3DSAMPLE __stdcall, AIL_allocate_3D_sample_handle, (HPROVIDER lib)) \
	WPROC("_AIL_set_3D_user_data@12", void __stdcall, AIL_set_3D_user_data, (H3DPOBJECT obj, unsigned int index, int value)) \
	WPROC("_AIL_unlock@0", void __stdcall, AIL_unlock, (void)) \
	WPROC("_AIL_lock@0", void __stdcall, AIL_lock, (void)) \
	WPROC("_AIL_set_3D_speaker_type@8", void __stdcall, AIL_set_3D_speaker_type, (HPROVIDER lib, int speaker_type)) \
	WPROC("_AIL_close_3D_listener@4", void __stdcall, AIL_close_3D_listener, (H3DPOBJECT listener)) \
	WPROC("_AIL_enumerate_3D_providers@12", int __stdcall, AIL_enumerate_3D_providers, (HPROENUM* next, HPROVIDER* dest, char** name)) \
	WPROC("_AIL_open_3D_provider@4", M3DRESULT __stdcall, AIL_open_3D_provider, (HPROVIDER lib)) \
	WPROC("_AIL_last_error@0", char* __stdcall, AIL_last_error, (void)) \
	WPROC("_AIL_open_3D_listener@4", H3DPOBJECT __stdcall, AIL_open_3D_listener, (HPROVIDER lib)) \
	WPROC("_AIL_3D_user_data@8", int __stdcall, AIL_3D_user_data, (H3DSAMPLE sample, int index)) \
	WPROC("_AIL_sample_user_data@8", int __stdcall, AIL_sample_user_data, (HSAMPLE sample, int index)) \
	WPROC("_AIL_allocate_sample_handle@4", HSAMPLE __stdcall, AIL_allocate_sample_handle, (HDIGDRIVER dig)) \
	WPROC("_AIL_set_sample_user_data@12", void __stdcall, AIL_set_sample_user_data, (HSAMPLE sample, unsigned int index, int value)) \
	WPROC("_AIL_decompress_ADPCM@12", int __stdcall, AIL_decompress_ADPCM, (const AILSOUNDINFO *info, void **outdata, unsigned long *outsize)) \
	WPROC("_AIL_get_DirectSound_info@12", void __stdcall, AIL_get_DirectSound_info, (HSAMPLE sample, AILLPDIRECTSOUND *lplpDS, AILLPDIRECTSOUNDBUFFER *lplpDSB)) \
	WPROC("_AIL_mem_free_lock@4", void __stdcall, AIL_mem_free_lock, (void *ptr)) \
	WPROC("_AIL_open_stream@12", HSTREAM __stdcall, AIL_open_stream, (HDIGDRIVER dig, const char *filename, int stream_mem)) \
	WPROC("_AIL_startup@0", int __stdcall, AIL_startup, (void)) \
	WPROC("_AIL_quick_unload@4", void __stdcall, AIL_quick_unload, (HAUDIO audio)) \
	WPROC("_AIL_quick_load_and_play@12", HAUDIO __stdcall, AIL_quick_load_and_play, (const char *filename, unsigned int loop_count, int wait_request)) \
	WPROC("_AIL_quick_set_volume@12", void __stdcall, AIL_quick_set_volume, (HAUDIO audio, float volume, float extravol)) \
	WPROC("_AIL_quick_startup@20", int __stdcall, AIL_quick_startup, (int use_digital, int use_MIDI, unsigned int output_rate, int output_bits, int output_channels)) \
	WPROC("_AIL_quick_handles@12", void __stdcall, AIL_quick_handles, (HDIGDRIVER *pdig, HMDIDRIVER *pmdi, HDLSDEVICE *pdls)) \
	WPROC("_AIL_sample_volume_pan@12", void __stdcall, AIL_sample_volume_pan, (HSAMPLE sample, float *volume, float *pan)) \
	WPROC("_AIL_set_3D_sample_occlusion@8", void __stdcall, AIL_set_3D_sample_occlusion, (H3DSAMPLE sample, float occlusion)) \
	WPROC("_AIL_set_redist_directory@4", char *__stdcall, AIL_set_redist_directory, (const char *dir)) \
	WPROC("_AIL_set_sample_file@12", int __stdcall, AIL_set_sample_file, (HSAMPLE sample, const void *file_image, int block)) \
	WPROC("_AIL_set_sample_volume_pan@12", void __stdcall, AIL_set_sample_volume_pan, (HSAMPLE sample, float volume, float pan)) \
	WPROC("_AIL_set_stream_volume_pan@12", void __stdcall, AIL_set_stream_volume_pan, (HSTREAM stream, float volume, float pan)) \
	WPROC("_AIL_stream_volume_pan@12", void __stdcall, AIL_stream_volume_pan, (HSTREAM stream, float *volume, float *pan)) \
	WPROC("_AIL_get_timer_highest_delay@0", unsigned long __stdcall, AIL_get_timer_highest_delay, (void))