// motion.h

#ifndef _MOTION_h
#define _MOTION_h

extern bool home();
extern bool home_idler();
extern bool home_selector();


extern void cut_filament();

extern void move(int _idler, int _selector);
extern void move_filament(int _mm);

extern void park_idler(bool _unpark);
extern void load_filament();
extern void load_filament_intoPrinter();
extern void unload_filament();
extern void set_positions(int _current_extruder, int _next_extruder);

#endif

