/**
 * Navit, a modular navigation system.
 * Copyright (C) 2005-2008 Navit Team
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 */

/* prototypes */

/* common */
ATTR2(0x00000000,none)
ATTR(any)

ATTR2(0x00010000,type_item_begin)
ATTR(town_streets_item)
ATTR(street_name_item)
ATTR(street_name_numbers_item)
ATTR(street_item)
ATTR(street_number_item)
ATTR(position_sat_item)
ATTR2(0x0001ffff,type_item_end)

ATTR2(0x00020000,type_int_begin)
ATTR(h)
ATTR(id)
ATTR(flags)
ATTR(w)
ATTR(x)
ATTR(y)
ATTR(flush_size)
ATTR(flush_time)
ATTR(zipfile_ref)
ATTR(country_id)
ATTR(position_sats)
ATTR(position_sats_used)
ATTR(update)
ATTR(follow)
ATTR(length)
ATTR(time)
ATTR(destination_length)
ATTR(destination_time)
ATTR(speed)
ATTR(interval)
ATTR(position_qual)
ATTR(zoom)
ATTR(retry_interval)
ATTR(projection)
ATTR(offroad)
ATTR(vocabulary_name)
ATTR(vocabulary_name_systematic)
ATTR(vocabulary_distances)
ATTR(announce_name_systematic_first)
ATTR(antialias)
ATTR(order_delta)
ATTR(baudrate)
ATTR(font_size)
ATTR(icon_xs)
ATTR(icon_l)
ATTR(icon_s)
ATTR(spacing)
ATTR(recent_dest)
ATTR(destination_distance)
ATTR(check_version)
ATTR(details)
ATTR(width)
ATTR(offset)
ATTR(directed)
ATTR(radius)
ATTR(text_size)
ATTR(level)
ATTR(icon_w)
ATTR(icon_h)
ATTR(rotation)
ATTR(checksum_ignore)
ATTR(position_fix_type)
ATTR(timeout)
ATTR(orientation)
ATTR(keyboard)
ATTR(position_sats_signal)
ATTR(cps)
ATTR(fast)
ATTR(osd_configuration)
ATTR(columns)
ATTR(align)
ATTR(sat_prn)
ATTR(sat_elevation)
ATTR(sat_azimuth)
ATTR(sat_snr)
ATTR(autozoom)
ATTR(version)
ATTR(autozoom_min)
ATTR(maxspeed)
ATTR(cdf_histsize)
ATTR(message_maxage)
ATTR(message_maxnum)
ATTR2(0x00028000,type_boolean_begin)
/* boolean */
ATTR(overwrite)
ATTR(active)
ATTR(cursor)
ATTR(orientation_removeme)
ATTR(tracking)
ATTR(menubar)
ATTR(statusbar)
ATTR(toolbar)
ATTR(animate)
ATTR(lazy)
ATTR(mkdir)
ATTR(predraw)
ATTR(postdraw)
ATTR(button)
ATTR(ondemand)
ATTR(menu_on_map_click)
ATTR(direction)
ATTR(route_follow_straight_REMOVE) // This is to be removed with the next version
ATTR(gui_speech)
ATTR(town_id) /* fixme? */
ATTR(street_id) /* fixme? */  
ATTR(district_id) /* fixme? */
ATTR(drag_bitmap)
ATTR(use_mousewheel)
ATTR(fullscreen)
ATTR(position_magnetic_direction)
ATTR(use_overlay)
ATTR(night_mode)
ATTR(autozoom_active)
ATTR2(0x0002ffff,type_int_end)
ATTR2(0x00030000,type_string_begin)
ATTR(type)
ATTR(label)
ATTR(data)
ATTR(charset)
ATTR(country_all)
ATTR(country_iso3)
ATTR(country_iso2)
ATTR(country_car)
ATTR(country_name)
ATTR(town_name)
ATTR(town_postal)
ATTR(district_name)
ATTR(street_name)
ATTR(street_name_systematic)
ATTR(street_number)
ATTR(debug)
ATTR(address)
ATTR(phone)
ATTR(entry_fee)
ATTR(open_hours)
ATTR(skin)
ATTR(fullscreen_removeme)
ATTR(view_mode)
ATTR(tilt)
ATTR(media_window_title)
ATTR(media_cmd)
ATTR(image_codec)
/* poi */
ATTR(icono)
ATTR(info_html)
ATTR(price_html)
/* navigation */
ATTR(navigation_short)
ATTR(navigation_long)
ATTR(navigation_long_exact)
ATTR(navigation_speech)
ATTR(name)
ATTR(source)
ATTR(description)
ATTR(gc_type)
ATTR(layout)
ATTR(position_nmea)
ATTR(gpsd_query)
ATTR(on_eof)
ATTR(command)
ATTR(src)
ATTR(path)
ATTR(font)
ATTR(url_local)
ATTR(gc_size)
ATTR(gc_difficulty)
ATTR(gc_terrain)
ATTR(icon_src)
ATTR(position_time_iso8601)
ATTR(house_number)
ATTR(osm_member)
ATTR(osm_tag)
ATTR(municipality_name)
ATTR(county_name)
ATTR(state_name)
ATTR(message)
ATTR2(0x0003ffff,type_string_end)
ATTR2(0x00040000,type_special_begin)
ATTR(order)
ATTR(item_type)
ATTR(item_types)
ATTR(dash)
ATTR(sequence_range)
ATTR(angle_range)
ATTR(speed_range)
ATTR2(0x0004ffff,type_special_end)
ATTR2(0x00050000,type_double_begin)
ATTR(position_height)
ATTR(position_speed)
ATTR(position_direction)
ATTR(position_hdop)
ATTR2(0x0005ffff,type_double_end)
ATTR2(0x00060000,type_coord_geo_begin)
ATTR(position_coord_geo)
ATTR(center)
ATTR2(0x0006ffff,type_coord_geo_end)
ATTR2(0x00070000,type_color_begin)
ATTR(color)
ATTR(color2)
ATTR(background_color)
ATTR(text_color)
ATTR(background_color2)
ATTR2(0x0007ffff,type_color_end)
ATTR2(0x00080000,type_object_begin)
ATTR(navit)
ATTR(log)
ATTR(callback)
ATTR(route)
ATTR(navigation)
ATTR(vehicle)
ATTR(map)
ATTR(bookmark_map)
ATTR(former_destination_map)
ATTR(graphics)
ATTR(gui)
ATTR(trackingo) /* fixme */
ATTR(plugins)
ATTR(layer)
ATTR(itemgra)
ATTR(polygon)
ATTR(polyline)
ATTR(circle)
ATTR(text)
ATTR(icon)
ATTR(image)
ATTR(arrows)
ATTR(mapset)
ATTR(osd)
ATTR(plugin)
ATTR(speech)
ATTR(coord)
ATTR(private_data)
ATTR(callback_list)
ATTR(displaylist)
ATTR(transformation)
ATTR2(0x0008ffff,type_object_end)
ATTR2(0x00090000,type_coord_begin)
ATTR2(0x0009ffff,type_coord_end)
ATTR2(0x000a0000,type_pcoord_begin)
ATTR(destination)
ATTR(position)
ATTR2(0x000affff,type_pcoord_end)
ATTR2(0x000b0000,type_callback_begin)
ATTR(resize)
ATTR(motion)
ATTR(keypress)
ATTR2(0x000bffff,type_callback_end)
ATTR2(0x000c0000,type_int64_begin)
ATTR(osm_nodeid)
ATTR(osm_wayid)
ATTR(osm_relationid)
ATTR2(0x000cffff,type_int64_end)
