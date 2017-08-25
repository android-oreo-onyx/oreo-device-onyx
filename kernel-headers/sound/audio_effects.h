/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _AUDIO_EFFECTS_H
#define _AUDIO_EFFECTS_H
#define CONFIG_CACHE 0
#define CONFIG_SET 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CONFIG_GET 2
#define VIRTUALIZER_MODULE 0x00001000
#define VIRTUALIZER_ENABLE 0x00001001
#define VIRTUALIZER_STRENGTH 0x00001002
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTUALIZER_OUT_TYPE 0x00001003
#define VIRTUALIZER_GAIN_ADJUST 0x00001004
#define VIRTUALIZER_ENABLE_PARAM_LEN 1
#define VIRTUALIZER_STRENGTH_PARAM_LEN 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTUALIZER_OUT_TYPE_PARAM_LEN 1
#define VIRTUALIZER_GAIN_ADJUST_PARAM_LEN 1
#define REVERB_MODULE 0x00002000
#define REVERB_ENABLE 0x00002001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REVERB_MODE 0x00002002
#define REVERB_PRESET 0x00002003
#define REVERB_WET_MIX 0x00002004
#define REVERB_GAIN_ADJUST 0x00002005
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REVERB_ROOM_LEVEL 0x00002006
#define REVERB_ROOM_HF_LEVEL 0x00002007
#define REVERB_DECAY_TIME 0x00002008
#define REVERB_DECAY_HF_RATIO 0x00002009
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REVERB_REFLECTIONS_LEVEL 0x0000200a
#define REVERB_REFLECTIONS_DELAY 0x0000200b
#define REVERB_LEVEL 0x0000200c
#define REVERB_DELAY 0x0000200d
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REVERB_DIFFUSION 0x0000200e
#define REVERB_DENSITY 0x0000200f
#define REVERB_ENABLE_PARAM_LEN 1
#define REVERB_MODE_PARAM_LEN 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REVERB_PRESET_PARAM_LEN 1
#define REVERB_WET_MIX_PARAM_LEN 1
#define REVERB_GAIN_ADJUST_PARAM_LEN 1
#define REVERB_ROOM_LEVEL_PARAM_LEN 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REVERB_ROOM_HF_LEVEL_PARAM_LEN 1
#define REVERB_DECAY_TIME_PARAM_LEN 1
#define REVERB_DECAY_HF_RATIO_PARAM_LEN 1
#define REVERB_REFLECTIONS_LEVEL_PARAM_LEN 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REVERB_REFLECTIONS_DELAY_PARAM_LEN 1
#define REVERB_LEVEL_PARAM_LEN 1
#define REVERB_DELAY_PARAM_LEN 1
#define REVERB_DIFFUSION_PARAM_LEN 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REVERB_DENSITY_PARAM_LEN 1
#define BASS_BOOST_MODULE 0x00003000
#define BASS_BOOST_ENABLE 0x00003001
#define BASS_BOOST_MODE 0x00003002
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BASS_BOOST_STRENGTH 0x00003003
#define BASS_BOOST_ENABLE_PARAM_LEN 1
#define BASS_BOOST_MODE_PARAM_LEN 1
#define BASS_BOOST_STRENGTH_PARAM_LEN 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EQ_MODULE 0x00004000
#define EQ_ENABLE 0x00004001
#define EQ_CONFIG 0x00004002
#define EQ_NUM_BANDS 0x00004003
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EQ_BAND_LEVELS 0x00004004
#define EQ_BAND_LEVEL_RANGE 0x00004005
#define EQ_BAND_FREQS 0x00004006
#define EQ_SINGLE_BAND_FREQ_RANGE 0x00004007
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EQ_SINGLE_BAND_FREQ 0x00004008
#define EQ_BAND_INDEX 0x00004009
#define EQ_PRESET_ID 0x0000400a
#define EQ_NUM_PRESETS 0x0000400b
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EQ_PRESET_NAME 0x0000400c
#define EQ_ENABLE_PARAM_LEN 1
#define EQ_CONFIG_PARAM_LEN 3
#define EQ_CONFIG_PER_BAND_PARAM_LEN 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EQ_NUM_BANDS_PARAM_LEN 1
#define EQ_BAND_LEVELS_PARAM_LEN 13
#define EQ_BAND_LEVEL_RANGE_PARAM_LEN 2
#define EQ_BAND_FREQS_PARAM_LEN 13
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EQ_SINGLE_BAND_FREQ_RANGE_PARAM_LEN 2
#define EQ_SINGLE_BAND_FREQ_PARAM_LEN 1
#define EQ_BAND_INDEX_PARAM_LEN 1
#define EQ_PRESET_ID_PARAM_LEN 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EQ_NUM_PRESETS_PARAM_LEN 1
#define EQ_PRESET_NAME_PARAM_LEN 32
#define EQ_TYPE_NONE 0
#define EQ_BASS_BOOST 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EQ_BASS_CUT 2
#define EQ_TREBLE_BOOST 3
#define EQ_TREBLE_CUT 4
#define EQ_BAND_BOOST 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EQ_BAND_CUT 6
#define SOFT_VOLUME_MODULE 0x00006000
#define SOFT_VOLUME_ENABLE 0x00006001
#define SOFT_VOLUME_GAIN_2CH 0x00006002
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SOFT_VOLUME_GAIN_MASTER 0x00006003
#define SOFT_VOLUME_ENABLE_PARAM_LEN 1
#define SOFT_VOLUME_GAIN_2CH_PARAM_LEN 2
#define SOFT_VOLUME_GAIN_MASTER_PARAM_LEN 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SOFT_VOLUME2_MODULE 0x00007000
#define SOFT_VOLUME2_ENABLE 0x00007001
#define SOFT_VOLUME2_GAIN_2CH 0x00007002
#define SOFT_VOLUME2_GAIN_MASTER 0x00007003
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SOFT_VOLUME2_ENABLE_PARAM_LEN SOFT_VOLUME_ENABLE_PARAM_LEN
#define SOFT_VOLUME2_GAIN_2CH_PARAM_LEN SOFT_VOLUME_GAIN_2CH_PARAM_LEN
#define SOFT_VOLUME2_GAIN_MASTER_PARAM_LEN   SOFT_VOLUME_GAIN_MASTER_PARAM_LEN
#define COMMAND_PAYLOAD_LEN 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define COMMAND_PAYLOAD_SZ (COMMAND_PAYLOAD_LEN * sizeof(uint32_t))
#define MAX_INBAND_PARAM_SZ 4096
#define Q27_UNITY (1 << 27)
#define Q8_UNITY (1 << 8)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CUSTOM_OPENSL_PRESET 18
#define VIRTUALIZER_ENABLE_PARAM_SZ   (VIRTUALIZER_ENABLE_PARAM_LEN*sizeof(uint32_t))
#define VIRTUALIZER_STRENGTH_PARAM_SZ   (VIRTUALIZER_STRENGTH_PARAM_LEN*sizeof(uint32_t))
#define VIRTUALIZER_OUT_TYPE_PARAM_SZ   (VIRTUALIZER_OUT_TYPE_PARAM_LEN*sizeof(uint32_t))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTUALIZER_GAIN_ADJUST_PARAM_SZ   (VIRTUALIZER_GAIN_ADJUST_PARAM_LEN*sizeof(uint32_t))
struct virtualizer_params {
 uint32_t device;
 uint32_t enable_flag;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t strength;
 uint32_t out_type;
 int32_t gain_adjust;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NUM_OSL_REVERB_PRESETS_SUPPORTED 6
#define REVERB_ENABLE_PARAM_SZ   (REVERB_ENABLE_PARAM_LEN*sizeof(uint32_t))
#define REVERB_MODE_PARAM_SZ   (REVERB_MODE_PARAM_LEN*sizeof(uint32_t))
#define REVERB_PRESET_PARAM_SZ   (REVERB_PRESET_PARAM_LEN*sizeof(uint32_t))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REVERB_WET_MIX_PARAM_SZ   (REVERB_WET_MIX_PARAM_LEN*sizeof(uint32_t))
#define REVERB_GAIN_ADJUST_PARAM_SZ   (REVERB_GAIN_ADJUST_PARAM_LEN*sizeof(uint32_t))
#define REVERB_ROOM_LEVEL_PARAM_SZ   (REVERB_ROOM_LEVEL_PARAM_LEN*sizeof(uint32_t))
#define REVERB_ROOM_HF_LEVEL_PARAM_SZ   (REVERB_ROOM_HF_LEVEL_PARAM_LEN*sizeof(uint32_t))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REVERB_DECAY_TIME_PARAM_SZ   (REVERB_DECAY_TIME_PARAM_LEN*sizeof(uint32_t))
#define REVERB_DECAY_HF_RATIO_PARAM_SZ   (REVERB_DECAY_HF_RATIO_PARAM_LEN*sizeof(uint32_t))
#define REVERB_REFLECTIONS_LEVEL_PARAM_SZ   (REVERB_REFLECTIONS_LEVEL_PARAM_LEN*sizeof(uint32_t))
#define REVERB_REFLECTIONS_DELAY_PARAM_SZ   (REVERB_REFLECTIONS_DELAY_PARAM_LEN*sizeof(uint32_t))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REVERB_LEVEL_PARAM_SZ   (REVERB_LEVEL_PARAM_LEN*sizeof(uint32_t))
#define REVERB_DELAY_PARAM_SZ   (REVERB_DELAY_PARAM_LEN*sizeof(uint32_t))
#define REVERB_DIFFUSION_PARAM_SZ   (REVERB_DIFFUSION_PARAM_LEN*sizeof(uint32_t))
#define REVERB_DENSITY_PARAM_SZ   (REVERB_DENSITY_PARAM_LEN*sizeof(uint32_t))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct reverb_params {
 uint32_t device;
 uint32_t enable_flag;
 uint32_t mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t preset;
 uint32_t wet_mix;
 int32_t gain_adjust;
 int32_t room_level;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int32_t room_hf_level;
 uint32_t decay_time;
 uint32_t decay_hf_ratio;
 int32_t reflections_level;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t reflections_delay;
 int32_t level;
 uint32_t delay;
 uint32_t diffusion;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t density;
};
#define BASS_BOOST_ENABLE_PARAM_SZ   (BASS_BOOST_ENABLE_PARAM_LEN*sizeof(uint32_t))
#define BASS_BOOST_MODE_PARAM_SZ   (BASS_BOOST_MODE_PARAM_LEN*sizeof(uint32_t))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BASS_BOOST_STRENGTH_PARAM_SZ   (BASS_BOOST_STRENGTH_PARAM_LEN*sizeof(uint32_t))
struct bass_boost_params {
 uint32_t device;
 uint32_t enable_flag;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t mode;
 uint32_t strength;
};
#define MAX_EQ_BANDS 12
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_OSL_EQ_BANDS 5
#define EQ_ENABLE_PARAM_SZ   (EQ_ENABLE_PARAM_LEN*sizeof(uint32_t))
#define EQ_CONFIG_PARAM_SZ   (EQ_CONFIG_PARAM_LEN*sizeof(uint32_t))
#define EQ_CONFIG_PER_BAND_PARAM_SZ   (EQ_CONFIG_PER_BAND_PARAM_LEN*sizeof(uint32_t))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EQ_CONFIG_PARAM_MAX_LEN (EQ_CONFIG_PARAM_LEN+  MAX_EQ_BANDS*EQ_CONFIG_PER_BAND_PARAM_LEN)
#define EQ_CONFIG_PARAM_MAX_SZ   (EQ_CONFIG_PARAM_MAX_LEN*sizeof(uint32_t))
#define EQ_NUM_BANDS_PARAM_SZ   (EQ_NUM_BANDS_PARAM_LEN*sizeof(uint32_t))
#define EQ_BAND_LEVELS_PARAM_SZ   (EQ_BAND_LEVELS_PARAM_LEN*sizeof(uint32_t))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EQ_BAND_LEVEL_RANGE_PARAM_SZ   (EQ_BAND_LEVEL_RANGE_PARAM_LEN*sizeof(uint32_t))
#define EQ_BAND_FREQS_PARAM_SZ   (EQ_BAND_FREQS_PARAM_LEN*sizeof(uint32_t))
#define EQ_SINGLE_BAND_FREQ_RANGE_PARAM_SZ   (EQ_SINGLE_BAND_FREQ_RANGE_PARAM_LEN*sizeof(uint32_t))
#define EQ_SINGLE_BAND_FREQ_PARAM_SZ   (EQ_SINGLE_BAND_FREQ_PARAM_LEN*sizeof(uint32_t))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EQ_BAND_INDEX_PARAM_SZ   (EQ_BAND_INDEX_PARAM_LEN*sizeof(uint32_t))
#define EQ_PRESET_ID_PARAM_SZ   (EQ_PRESET_ID_PARAM_LEN*sizeof(uint32_t))
#define EQ_NUM_PRESETS_PARAM_SZ   (EQ_NUM_PRESETS_PARAM_LEN*sizeof(uint8_t))
struct eq_config_t {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int32_t eq_pregain;
 int32_t preset_id;
 uint32_t num_bands;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct eq_per_band_config_t {
 int32_t band_idx;
 uint32_t filter_type;
 uint32_t freq_millihertz;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int32_t gain_millibels;
 uint32_t quality_factor;
};
struct eq_per_band_freq_range_t {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t band_index;
 uint32_t min_freq_millihertz;
 uint32_t max_freq_millihertz;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct eq_params {
 uint32_t device;
 uint32_t enable_flag;
 struct eq_config_t config;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct eq_per_band_config_t per_band_cfg[MAX_EQ_BANDS];
 struct eq_per_band_freq_range_t per_band_freq_range[MAX_EQ_BANDS];
 uint32_t band_index;
 uint32_t freq_millihertz;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define SOFT_VOLUME_ENABLE_PARAM_SZ   (SOFT_VOLUME_ENABLE_PARAM_LEN*sizeof(uint32_t))
#define SOFT_VOLUME_GAIN_MASTER_PARAM_SZ   (SOFT_VOLUME_GAIN_MASTER_PARAM_LEN*sizeof(uint32_t))
#define SOFT_VOLUME_GAIN_2CH_PARAM_SZ   (SOFT_VOLUME_GAIN_2CH_PARAM_LEN*sizeof(uint16_t))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct soft_volume_params {
 uint32_t device;
 uint32_t enable_flag;
 uint32_t master_gain;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t left_gain;
 uint32_t right_gain;
};
struct msm_nt_eff_all_config {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct bass_boost_params bass_boost;
 struct virtualizer_params virtualizer;
 struct reverb_params reverb;
 struct eq_params equalizer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct soft_volume_params saplus_vol;
 struct soft_volume_params topo_switch_vol;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
