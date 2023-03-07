/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:41:24 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/17 14:29:13 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"


void      Contacts::set_first_name(std::string name) {firstName = name;}

std::string Contacts::get_first_name(void) const {return firstName;}


void      Contacts::set_last_name(std::string name) {lastName = name;}
std::string Contacts::get_last_name(void) const {return lastName;}


void      Contacts::set_nickname(std::string name) {nickname = name;}
std::string Contacts::get_nickname(void) const {return nickname;}

void      Contacts::set_phone(std::string name) {phoneNumber = name;}
std::string Contacts::get_phone(void) const {return phoneNumber;}


void      Contacts::set_dark(std::string name) {darkestSecret = name;}
std::string Contacts::get_dark(void) const {return darkestSecret;}


Contacts::Contacts(){}
Contacts::~Contacts() {}

