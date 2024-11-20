// src/components/Header.js
import React from 'react';

const Header = () => (
  <header className="flex justify-between items-center p-4 bg-white shadow-md fixed top-0 w-full z-50">
    <h1 className="text-2xl font-bold text-blue-600">Breeze</h1>
    <nav>
      <ul className="flex space-x-6 text-gray-600">
        <li><a href="#home" className="hover:text-blue-600">Home</a></li>
        <li><a href="#about" className="hover:text-blue-600">About</a></li>
        <li><a href="#properties" className="hover:text-blue-600">Properties</a></li>
        <li><a href="#contact" className="hover:text-blue-600">Contact</a></li>
      </ul>
    </nav>
  </header>
);

export default Header;
