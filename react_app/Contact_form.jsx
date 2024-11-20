// src/components/Contact.js
import React from 'react';

const Contact = () => (
  <section id="contact" className="py-10 bg-gradient-to-r from-gray-100 to-gray-200">
    <h2 className="text-4xl font-bold text-center mb-6 text-gray-700">Contact Us</h2>
    <form
      className="max-w-lg mx-auto flex flex-col gap-6 bg-white p-6 rounded-lg shadow-lg"
      onSubmit={(e) => e.preventDefault()}
    >
      <input
        type="text"
        placeholder="Your Name"
        className="border p-3 rounded-lg focus:outline-none focus:ring-2 focus:ring-blue-500"
      />
      <input
        type="email"
        placeholder="Your Email"
        className="border p-3 rounded-lg focus:outline-none focus:ring-2 focus:ring-blue-500"
      />
      <textarea
        placeholder="Your Message"
        className="border p-3 rounded-lg h-32 focus:outline-none focus:ring-2 focus:ring-blue-500"
      ></textarea>
      <button
        type="submit"
        className="bg-blue-600 text-white px-6 py-3 rounded-lg hover:bg-blue-700 transition-colors"
      >
        Send Message
      </button>
    </form>
  </section>
);

export default Contact;
