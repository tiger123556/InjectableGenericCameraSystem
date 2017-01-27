////////////////////////////////////////////////////////////////////////////////////////////////////////
// Part of Injectable Generic Camera System
// Copyright(c) 2017, Frans Bouma
// All rights reserved.
// https://github.com/FransBouma/InjectableGenericCameraSystem
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met :
//
//  * Redistributions of source code must retain the above copyright notice, this
//	  list of conditions and the following disclaimer.
//
//  * Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and / or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED.IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once

namespace IGCS::GameSpecific
{
	// Mandatory constants to define for a game
	#define GAME_NAME									"DOOM x64, Steam"
	#define CAMERA_VERSION								"1.0.0"
	#define CAMERA_CREDITS								"Otis_Inf"
	#define GAME_WINDOW_TITLE							"DOOMx64"
	#define INITIAL_PITCH_RADIANS						0.0f
	#define INITIAL_YAW_RADIANS							0.0f
	#define INITIAL_ROLL_RADIANS						0.0f
	#define CONTROLLER_Y_INVERT							true
	#define FASTER_MULTIPLIER							3.0f
	#define SLOWER_MULTIPLIER							0.15f
	#define MOUSE_SPEED_CORRECTION						0.2f	// to correct for the mouse-deltas related to normal rotation.
	#define DEFAULT_MOVEMENT_SPEED						1.0f
	#define DEFAULT_ROTATION_SPEED						0.01f
	#define DEFAULT_FOV_SPEED							0.5f
	#define DEFAULT_FOV									90.0f
	#define DEFAULT_Z_MOVEMENT_MULTIPLIER				0.5f
	#define DEFAULT_GAME_SPEED							1.875f
	#define DEFAULT_MIN_GAME_SPEED						0.1f
	#define DEFAULT_MAX_GAME_SPEED						10.0f
	// End Mandatory constants

	// Offsets for camera intercept code. Used in interceptor.
	// Game uses 2 camera objects with the same data, one is used for calculations and the contents is then copied to the other, and vice versa.
	// So our camera has to update both at the same time as we never know which one is active. 
	#define CAMERA_ADDRESS_INTERCEPT_START_OFFSET		0x91F87E
	#define CAMERA_ADDRESS_INTERCEPT_CONTINUE_OFFSET	0x91F8E6
	#define FOV_ADDRESS_INTERCEPT_START_OFFSET			0xD1D11	// doesn't work
	#define FOV_ADDRESS_INTERCEPT_CONTINUE_OFFSET		0xD1D20	

	#define	CAMERA_WRITE_INTERCEPT1_START_OFFSET		0x85B9E0
	#define CAMERA_WRITE_INTERCEPT1_CONTINUE_OFFSET		0x85B9F1
	#define	CAMERA_WRITE_INTERCEPT2_START_OFFSET		0x86847E
	#define CAMERA_WRITE_INTERCEPT2_CONTINUE_OFFSET		0x8684D5
	#define	CAMERA_WRITE_INTERCEPT3_START_OFFSET		0x1BA9E0
	#define CAMERA_WRITE_INTERCEPT3_CONTINUE_OFFSET		0x1BAA8D

	#define GAMESPEED_ADDRESS_INTERCEPT_START_OFFSET	0x47FBB3	
	#define GAMESPEED_ADDRESS_INTERCEPT_CONTINUE_OFFSET 0x47FBC6	

	// Indices in the structures read by interceptors 
	#define LOOK_DATA_IN_CAMERA_STRUCT_OFFSET			0xCC		
	#define CAMERA_COORDS_IN_CAMERA_STRUCT_OFFSET		0xC0		
	#define FOV_IN_STRUCT_OFFSET						0x10

	#define GAMESPEED_IN_STRUCT_OFFSET					0x74
}