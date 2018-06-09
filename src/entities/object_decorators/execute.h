/*
 * Open Surge Engine
 * execute.h - Executes some state immediately
 * Copyright (C) 2012  Alexandre Martins <alemartf(at)gmail(dot)com>
 * http://opensurge2d.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _OD_EXECUTE_H
#define _OD_EXECUTE_H

#include "base/objectdecorator.h"
#include "../../core/nanocalc/nanocalc.h"

objectmachine_t* objectdecorator_execute_new(objectmachine_t *decorated_machine, const char *state_name);
objectmachine_t* objectdecorator_executeif_new(objectmachine_t *decorated_machine, const char *state_name, expression_t* condition);
objectmachine_t* objectdecorator_executeunless_new(objectmachine_t *decorated_machine, const char *state_name, expression_t* condition);
objectmachine_t* objectdecorator_executewhile_new(objectmachine_t *decorated_machine, const char *state_name, expression_t* condition);
objectmachine_t* objectdecorator_executefor_new(objectmachine_t *decorated_machine, const char *state_name, expression_t* initial, expression_t* condition, expression_t* iteration);

#endif

